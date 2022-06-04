#include "input.hpp"

Input::Input(){}

Input::~Input(){}

void Input::Update(){
  SDL_Event e;
  while(SDL_PollEvent(&e)){
    if(e.type == SDL_QUIT){
      GameIsRunning = false;
    }
  }
}