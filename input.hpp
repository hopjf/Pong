#pragma once

#include <SDL.h>

class Input{
public:
  bool GameIsRunning = true;

  Input();
  ~Input();

  void Update();

private:
};