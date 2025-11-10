#include "cimgui_backend_sdlgpu.h"

extern "C" {

// --- SDL3 platform backend ---
bool igImplSDL3_InitForSDLGPU(SDL_Window* window) {
    return ImGui_ImplSDL3_InitForSDLGPU(window);
}
void igImplSDL3_Shutdown() { ImGui_ImplSDL3_Shutdown(); }
void igImplSDL3_NewFrame() { ImGui_ImplSDL3_NewFrame(); }
bool igImplSDL3_ProcessEvent(const SDL_Event* e) { return ImGui_ImplSDL3_ProcessEvent(e); }

// --- SDLGPU3 renderer backend ---
bool igImplSDLGPU3_Init(ImGui_ImplSDLGPU3_InitInfo* info) { return ImGui_ImplSDLGPU3_Init(info); }
void igImplSDLGPU3_Shutdown() { ImGui_ImplSDLGPU3_Shutdown(); }
void igImplSDLGPU3_NewFrame() { ImGui_ImplSDLGPU3_NewFrame(); }
void igImplSDLGPU3_PrepareDrawData(ImDrawData* dd, SDL_GPUCommandBuffer* cb) { ImGui_ImplSDLGPU3_PrepareDrawData(dd, cb); }
void igImplSDLGPU3_RenderDrawData(ImDrawData* dd, SDL_GPUCommandBuffer* cb, SDL_GPURenderPass* rp) { ImGui_ImplSDLGPU3_RenderDrawData(dd, cb, rp); }
void igImplSDLGPU3_CreateDeviceObjects() { ImGui_ImplSDLGPU3_CreateDeviceObjects(); }
void igImplSDLGPU3_DestroyDeviceObjects() { ImGui_ImplSDLGPU3_DestroyDeviceObjects(); }

}
