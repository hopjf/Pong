#include "graphics.hpp"
#include <thread>

Renderer::Renderer(){
  SDL_Init(SDL_INIT_EVERYTHING);
  window = SDL_CreateWindow("Pong", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
  surface = SDL_GetWindowSurface(window);
  renderer = SDL_CreateSoftwareRenderer(surface);

  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0xFF);
  SDL_RenderClear(renderer);
}

Renderer::~Renderer(){
  SDL_Quit();
}

void Renderer::DrawSquare(int x, int y, int width, int height){
  SDL_Rect rect;
  rect.w = width;
  rect.h = height;
  rect.x = x;
  rect.y = y;

  SDL_RenderFillRect(renderer, &rect);
}

void Renderer::Render(){
  SDL_UpdateWindowSurface(window);

  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0xFF);
  SDL_RenderClear(renderer);
  SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);

  std::this_thread::sleep_for(std::chrono::milliseconds(16));
}