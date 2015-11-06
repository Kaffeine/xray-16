#include "stdafx.h"
#include "xrCDB/ISpatial.h"
#include "IRenderable.h"

IRenderable::IRenderable()
{
    renderable.xform.identity();
    renderable.visual = NULL;
    renderable.pROS = NULL;
    renderable.pROS_Allowed = TRUE;
    ISpatial* self = dynamic_cast<ISpatial*> (this);
    if (self) self->spatial.type |= STYPE_RENDERABLE;
}

extern ENGINE_API BOOL g_bRendering;
IRenderable::~IRenderable()
{
    VERIFY(!g_bRendering);
    GlobalEnv.Render->model_Delete(renderable.visual);
    if (renderable.pROS) GlobalEnv.Render->ros_destroy(renderable.pROS);
    renderable.visual = NULL;
    renderable.pROS = NULL;
}

IRender_ObjectSpecific* IRenderable::renderable_ROS()
{
    if (0 == renderable.pROS && renderable.pROS_Allowed) renderable.pROS = GlobalEnv.Render->ros_create(this);
    return renderable.pROS;
}
