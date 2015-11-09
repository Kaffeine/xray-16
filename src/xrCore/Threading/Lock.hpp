#pragma once
#include "xrCore/xrCore.h"

#include <mutex>
#include <atomic>

#ifdef PROFILE_CRITICAL_SECTIONS
#define PROFILE_LOCKS
#endif

#ifdef PROFILE_LOCKS
typedef void(*add_profile_portion_callback) (LPCSTR id, const u64& time);
void XRCORE_API set_add_profile_portion(add_profile_portion_callback callback);

# define STRINGIZER_HELPER(a) #a
# define STRINGIZER(a) STRINGIZER_HELPER(a)
# define CONCATENIZE_HELPER(a,b) a##b
# define CONCATENIZE(a,b) CONCATENIZE_HELPER(a,b)
# define MUTEX_PROFILE_PREFIX_ID #mutexes/
# define MUTEX_PROFILE_ID(a) STRINGIZER(CONCATENIZE(MUTEX_PROFILE_PREFIX_ID,a))
#endif // PROFILE_LOCKS

class XRCORE_API Lock
{
public:
#ifdef PROFILE_LOCKS
    inline Lock(const char *id) : is_locked(false), id(id) { }
#else
    inline Lock() : is_locked(false) { }
#endif

    Lock(const Lock &) = delete;
    Lock operator=(const Lock &) = delete;

#ifdef PROFILE_LOCKS
    void Enter();
#else
    inline void Enter() { return mutex.lock(); is_locked = true; }
#endif

    inline bool TryEnter()
    {
        bool locked = mutex.try_lock();
        if (locked)
        {
            is_locked = true;
        }
        return locked;
    }

    inline void Leave() { return mutex.unlock(); is_locked = false; }

    inline bool IsLocked() const { return is_locked; }

private:
    std::mutex mutex;
    std::atomic_bool is_locked;
#ifdef PROFILE_LOCKS
    const char *id;
#endif
};
