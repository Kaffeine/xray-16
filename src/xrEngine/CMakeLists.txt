SET(SOURCES
#    CameraBase.cpp
#    CameraManager.cpp
#    CustomHUD.cpp
#    Device_Initialize.cpp
#    Device_Misc.cpp
#    Device_create.cpp
#    Device_destroy.cpp
#    Device_overdraw.cpp
#    Device_wndproc.cpp
#    Effector.cpp
#    EffectorPP.cpp
#    Engine.cpp
#    EngineAPI.cpp
#    Environment.cpp
#    Environment_misc.cpp
#    Environment_render.cpp
    EventAPI.cpp
#    FDemoPlay.cpp
#    FDemoRecord.cpp
#    Feel_Touch.cpp
#    Feel_Vision.cpp
#    GameFont.cpp
#    GameMtlLib.cpp
#    GameMtlLib_Engine.cpp
#    ICollidable.cpp
#    IGame_Level.cpp
#    IGame_Level_check_textures.cpp
#    IGame_ObjectPool.cpp
#    IGame_Persistent.cpp
#    IInputReceiver.cpp
    IRenderable.cpp
    ISheduled.cpp
#    LightAnimLibrary.cpp
#    ObjectAnimator.cpp
#    ObjectDump.cpp
#    PS_instance.cpp
#    PerformanceAlert.cpp
#    Rain.cpp
#    Render.cpp
#    StatGraph.cpp
#    Stats.cpp
#    Text_Console.cpp
#    Text_Console_WndProc.cpp
#    XR_IOConsole.cpp
#    XR_IOConsole_callback.cpp
#    XR_IOConsole_control.cpp
#    XR_IOConsole_get.cpp
#    Xr_input.cpp
#    cf_dynamic_mesh.cpp
#    defines.cpp
#    device.cpp
#    edit_actions.cpp
#    editor_environment_ambients_ambient.cpp
#    editor_environment_ambients_effect_id.cpp
#    editor_environment_ambients_manager.cpp
#    editor_environment_ambients_sound_id.cpp
#    editor_environment_detail.cpp
#    editor_environment_effects_effect.cpp
#    editor_environment_effects_manager.cpp
#    editor_environment_levels_manager.cpp
#    editor_environment_manager.cpp
#    editor_environment_manager_properties.cpp
#    editor_environment_sound_channels_channel.cpp
#    editor_environment_sound_channels_manager.cpp
#    editor_environment_sound_channels_source.cpp
#    editor_environment_suns_blend.cpp
#    editor_environment_suns_flare.cpp
#    editor_environment_suns_flares.cpp
#    editor_environment_suns_gradient.cpp
#    editor_environment_suns_manager.cpp
#    editor_environment_suns_sun.cpp
#    editor_environment_thunderbolts_collection.cpp
#    editor_environment_thunderbolts_gradient.cpp
#    editor_environment_thunderbolts_manager.cpp
#    editor_environment_thunderbolts_thunderbolt.cpp
#    editor_environment_thunderbolts_thunderbolt_id.cpp
#    editor_environment_weathers_manager.cpp
#    editor_environment_weathers_time.cpp
#    editor_environment_weathers_weather.cpp
#    engine_impl.cpp
#    line_edit_control.cpp
#    line_editor.cpp
#    mailSlot.cpp
#    perlin.cpp
#    phdebug.cpp
#    pure.cpp
#    pure_relcase.cpp
#    stdafx.cpp
#    thunderbolt.cpp
#    tntQAVI.cpp
#    x_ray.cpp
#    xrHemisphere.cpp
#    xrImage_Resampler.cpp
#    xrLoadSurface.cpp
#    xrSASH.cpp
#    xrSheduler.cpp
#    xrTheora_Stream.cpp
#    xrTheora_Surface.cpp
#    xrTheora_Surface_mmx.cpp
#    xr_collide_form.cpp
#    xr_efflensflare.cpp
#    xr_input_xinput.cpp
#    xr_ioc_cmd.cpp
#    xr_object.cpp
#    xr_object_list.cpp
)

SET(HEADERS
    CameraBase.h
    CameraDebug.h
    CameraDefs.h
    CameraManager.h
    CopyProtection.h
    CustomHUD.h
    Effector.h
    EffectorPP.h
    Engine.h
    EngineAPI.h
    EnnumerateVertices.h
    Environment.h
    EventAPI.h
    FDemoPlay.h
    FDemoRecord.h
    Feel_Sound.h
    Feel_Touch.h
    Feel_Vision.h
    GameFont.h
    GameMtlLib.h
    ICollidable.h
    IGameFont.hpp
    IGame_Level.h
    IGame_ObjectPool.h
    IGame_Persistent.h
    IInputReceiver.h
    IObjectPhysicsCollision.h
    IPHdebug.h
    IPerformanceAlert.hpp
    IPhysicsGeometry.h
    IPhysicsShell.h
    IRenderable.h
    ISheduled.h
    LightAnimLibrary.h
    ObjectAnimator.h
    ObjectDump.h
    PS_instance.h
    PerformanceAlert.hpp
    Properties.h
    Rain.h
    Render.h
    StatGraph.cpp
    StatGraph.h
    Stats.h
    Text_Console.h
    WaveForm.h
    XR_IOConsole.h
    cf_dynamic_mesh.h
    dedicated_server_only.h
    defines.h
    device.h
    edit_actions.h
    editor_environment_ambients_ambient.hpp
    editor_environment_ambients_effect_id.hpp
    editor_environment_ambients_manager.hpp
    editor_environment_ambients_sound_id.hpp
    editor_environment_detail.hpp
    editor_environment_effects_effect.hpp
    editor_environment_effects_manager.hpp
    editor_environment_levels_manager.hpp
    editor_environment_manager.hpp
    editor_environment_sound_channels_channel.hpp
    editor_environment_sound_channels_manager.hpp
    editor_environment_sound_channels_source.hpp
    editor_environment_suns_blend.hpp
    editor_environment_suns_flare.hpp
    editor_environment_suns_flares.hpp
    editor_environment_suns_gradient.hpp
    editor_environment_suns_manager.hpp
    editor_environment_suns_sun.hpp
    editor_environment_thunderbolts_collection.hpp
    editor_environment_thunderbolts_gradient.hpp
    editor_environment_thunderbolts_manager.hpp
    editor_environment_thunderbolts_thunderbolt.hpp
    editor_environment_thunderbolts_thunderbolt_id.hpp
    editor_environment_weathers_manager.hpp
    editor_environment_weathers_time.hpp
    editor_environment_weathers_weather.hpp
    engine_impl.hpp
    ide.hpp
    line_edit_control.h
    line_editor.h
    mp_logging.h
    no_single.h
    perlin.h
    property_collection.hpp
    property_collection_forward.hpp
    property_collection_inline.hpp
    psystem.h
    pure.h
    pure_relcase.h
    resource.h
    securom_api.h
    std_classes.h
    stdafx.h
    thunderbolt.h
    tntQAVI.h
    trivial_encryptor.h
    vis_common.h
    x_ray.h
    xrHemisphere.h
    xrImage_Resampler.h
    xrSASH.h
    xrSheduler.h
    xrTheora_Stream.h
    xrTheora_Surface.h
    xrTheora_Surface_mmx.h
    xr_collide_form.h
    xr_efflensflare.h
    xr_input.h
    xr_input_xinput.h
    xr_ioc_cmd.h
    xr_object.h
    xr_object_list.h
)

add_library(xrEngine SHARED ${SOURCES}  ${HEADERS}
)

include_directories(${CMAKE_SOURCE_DIR})

include_directories(".")
