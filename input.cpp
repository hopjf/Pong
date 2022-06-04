#include "input.hpp"

Input::Input(){}

Input::~Input(){}

void Input::Update(){
  SDL_Event e;
  while(SDL_PollEvent(&e)){
    if(e.type == SDL_QUIT){
      GameIsRunning = false;
    }

    if(e.type == SDL_KEYDOWN && (e.key.keysym.sym == SDLK_UP)){ up = true; }
    if(e.type == SDL_KEYUP && (e.key.keysym.sym == SDLK_UP)){ up = false; }

    if(e.type == SDL_KEYDOWN && (e.key.keysym.sym == SDLK_DOWN)){ down = false; }
    if(e.type == SDL_KEYUP && (e.key.keysym.sym == SDLK_DOWN)){ down = false; }
  }
}

bool Input::UpPressed(){
  return up;
}

bool Input::DownPressed(){
  return down;
}
