#pragma once
#include "imgui_internal.h"
#include "cimgui.h"
#include "backends/imgui_impl_sdl3.h"
#include "backends/imgui_impl_sdlgpu3.h"

extern "C" {

// SDL3 platform backend
bool igImplSDL3_InitForSDLGPU(SDL_Window* window);
void igImplSDL3_Shutdown();
void igImplSDL3_NewFrame();
bool igImplSDL3_ProcessEvent(const SDL_Event* event);

// GPU3 renderer backend
bool igImplSDLGPU3_Init(ImGui_ImplSDLGPU3_InitInfo* info);
void igImplSDLGPU3_Shutdown();
void igImplSDLGPU3_NewFrame();
void igImplSDLGPU3_PrepareDrawData(ImDrawData* draw_data, SDL_GPUCommandBuffer* command_buffer);
void igImplSDLGPU3_RenderDrawData(ImDrawData* draw_data, SDL_GPUCommandBuffer* command_buffer, SDL_GPURenderPass* render_pass);
void igImplSDLGPU3_CreateDeviceObjects();
void igImplSDLGPU3_DestroyDeviceObjects();

}
