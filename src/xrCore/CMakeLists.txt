SET(SOURCES
#    ELocatorAPI.cpp
#    FS.cpp
    FTimer.cpp
#    FileSystem.cpp
#    FileSystem_borland.cpp
#    LocatorAPI.cpp
#    LocatorAPI_Notifications.cpp
#    LocatorAPI_auth.cpp
#    LocatorAPI_defs.cpp
#    LzHuf.cpp
    Model.cpp
    NET_utils.cpp
    Xr_ini.cpp
    _compressed_normal.cpp
#    _math.cpp
    _sphere.cpp
#    _std_extensions.cpp
#    clsid.cpp
#    cpuid.cpp
    crc32.cpp
#    doug_lea_allocator.cpp
#    dump_string.cpp
#    file_stream_reader.cpp
#    log.cpp
#    lzo1x_d3.cpp
    lzo_compressor.cpp
    memory_allocation_stats.cpp
#    memory_monitor.cpp
#    memory_usage.cpp
#    os_clipboard.cpp
#    ppmd_compressor.cpp
#    rt_compressor.cpp
#    rt_compressor9.cpp
#    rt_lzo.cpp
#    rt_lzo1x_1.cpp
#    rt_lzo1x_9x.cpp
#    rt_lzo1x_d1.cpp
#    rt_lzo1x_d2.cpp
#    rt_lzo1x_d3.cpp
#    rt_lzo_init.cpp
#    stdafx.cpp
#    stream_reader.cpp
    string_concatenations.cpp
#    xrCore.cpp
#    xrDebug.cpp
#    xrDebugNew.cpp
    xrMemory.cpp
#    xrMemory_POOL.cpp
#    xrMemory_align.cpp
#    xrMemory_debug.cpp
#    xrMemory_pso_Copy.cpp
#    xrMemory_pso_Fill.cpp
#    xrMemory_pso_Fill32.cpp
#    xrMemory_subst_borland.cpp
#    xrMemory_subst_msvc.cpp
#    xrSyncronize.cpp
#    xr_shared.cpp
    xr_trims.cpp
    xrsharedmem.cpp
    xrstring.cpp
)

set(ANIMATION_SOURCES
    Animation/Bone.cpp
    Animation/Envelope.cpp
    Animation/Motion.cpp
    Animation/SkeletonMotions.cpp
    Animation/interp.cpp
)

set(ANIMATION_HEADERS
    Animation/Bone.hpp
    Animation/Envelope.hpp
    Animation/Motion.hpp
    Animation/SkeletonMotions.hpp
    Animation/interp.hpp
)

set(CONTAINERS_HEADERS
    AssociativeVector.hpp
    AssociativeVectorComparer.hpp
)

set(CRYPTO_SOURCES
    Crypto/crypto.cpp
#    Crypto/xr_dsa_signer.cpp
    Crypto/xr_dsa_verifyer.cpp
    Crypto/xr_dsa.cpp
    Crypto/xr_sha.cpp
)

set(CRYPTO_HEADERS
    Crypto/crypto.h
    Crypto/xr_dsa_signer.h
    Crypto/xr_dsa_verifyer.h
    Crypto/xr_dsa.h
    Crypto/xr_sha.h
)

set(MATH_SOURCES
    Math/MathUtil.cpp
    Math/PLC_SSE.cpp
#    Math/Skin4W_MT.cpp
#    Math/SkinXW_SSE.cpp
)

set(MATH_HEADERS
    Math/MathUtil.hpp
    Math/PLC_SSE.hpp
    Math/Skin4W_MT.hpp
    Math/SkinXW_SSE.hpp
)

set(MEDIA_SOURCES
    Media/Image.cpp
)

set(MEDIA_HEADERS
    Media/Image.hpp
)

set(POST_PROCESS_SOURCES
    PostProcess/PostProcess.cpp
    PostProcess/PPInfo.cpp
)

set(POST_PROCESS_HEADERS
    PostProcess/PostProcess.hpp
    PostProcess/PPInfo.hpp
)

set(TEXT_SOURCES
    Text/MbHelpers.cpp
)

set(TEXT_HEADERS
    Text/MbHelpers.hpp
)

SET(HEADERS 
    ChooseTypes.H
    Coder.hpp
    FS.h
    FS_impl.h
    FS_internal.h
    FTimer.h
    FileSystem.h
    FixedMap.h
    FixedSet.h
    FixedVector.h
    LocatorAPI.h
    LocatorAPI_defs.h
    PPMd.h
    PPMdType.h
    SubAlloc.hpp
    _bitwise.h
    _color.h
    _compressed_normal.h
    _cylinder.h
    _fbox.h
    _fbox2.h
    _flags.h
    _math.h
    _matrix.h
    _matrix33.h
    _obb.h
    _plane.h
    _plane2.h
    _quaternion.h
    _random.h
    _rect.h
    _sphere.h
    _std_extensions.h
    _stl_extensions.h
    _types.h
    _vector2.h
    _vector3d.h
    _vector3d_ext.h
    _vector4.h
    buffer_vector.h
    buffer_vector_inline.h
    client_id.h
    clsid.h
    compression_ppmd_stream.h
    compression_ppmd_stream_inline.h
    cpuid.h
    doug_lea_allocator.h
    dump_string.h
    fastdelegate.h
    file_stream_reader.h
    intrusive_ptr.h
    intrusive_ptr_inline.h
    log.h
    lzhuf.h
    lzo_compressor.h
    memory_allocator_options.h
    memory_monitor.h
    net_utils.h
    os_clipboard.h
    ppmd_compressor.h
    resource.h
    rt_compressor.h
    rt_config1x.h
    rt_lzo.h
    rt_lzo1_d.ch
    rt_lzo1x.h
    rt_lzo1x_c.ch
    rt_lzo1x_d.ch
    rt_lzo_conf.h
    rt_lzo_config.h
    rt_lzo_dict.h
    rt_lzo_dll.ch
    rt_lzo_mchw.ch
    rt_lzo_ptr.h
    rt_lzo_swd.ch
    rt_lzoconf.h
    rt_lzodefs.h
    rt_miniacc.h
    stdafx.h
    Stream_Reader.h
    stream_reader_inline.h
    string_concatenations.h
    string_concatenations_inline.h
    vector.h
    xrCore.h
    Platform.h
    xrDebug.h
    xrDebug_macros.h
    xrMemory_POOL.h
    xrMemory.h
    xrMemory_align.h
    xrMemory_pso.h
    xrMemory_pure.h
    xrPool.h
    xr_ini.h
    xr_resource.h
    xr_shared.h
    xr_trims.h
    xrsharedmem.h
    xrstring.h
)

add_library(xrCore SHARED ${SOURCES}  ${HEADERS}
    ${ANIMATION_SOURCES}
    ${CRYPTO_SOURCES}
    ${MATH_SOURCES}
    ${MEDIA_SOURCES}
    ${POST_PROCESS_SOURCES}
    ${TEXT_SOURCES}
)

include_directories(${CMAKE_SOURCE_DIR})

include_directories(".")
