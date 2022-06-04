#pragma once

#include <SDL.h>

class Input{
public:
  bool GameIsRunning = true;

  Input();
  ~Input();

  void Update();
  
  bool UpPressed();
  bool DownPressed();


private:
  bool up, down;
};