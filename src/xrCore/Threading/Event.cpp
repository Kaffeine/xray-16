#include "stdafx.h"
#include "Event.hpp"


Event::Event() { }

Event::~Event() {  }

void Event::Reset() {  }

void Event::Set() {  }

void Event::Wait() const {  }

bool Event::Wait(u32 millisecondsTimeout) const { }

#if 0
#include <windows.h>

Event::Event() { handle = (void*)CreateEvent(NULL, FALSE, FALSE, NULL); }

Event::~Event() { CloseHandle(handle); }

void Event::Reset() { ResetEvent(handle); }

void Event::Set() { SetEvent(handle); }

void Event::Wait() const { WaitForSingleObject(handle, INFINITE); }

bool Event::Wait(u32 millisecondsTimeout) const
{ return WaitForSingleObject(handle, millisecondsTimeout)!=WAIT_TIMEOUT; }
#endif