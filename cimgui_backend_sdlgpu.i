%module cimgui_sdlgpu
%{
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "cimgui.h"
#include "cimgui_backend_sdlgpu.h"
%}

%include "cimgui.h"
%include "cimgui_backend_sdlgpu.h"
