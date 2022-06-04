#pragma once

#include <SDL.h>

class Renderer{
public:
  Renderer();
  ~Renderer();

  void DrawSquare(int x, int y, int width, int height);
  void Render();

private:
  SDL_Window *window;
  SDL_Renderer *renderer;
  SDL_Surface *surface;
};