#pragma once

#include <TimerMs.h>

class TimerMs_Ex : public TimerMs
{
public:
  TimerMs_Ex(uint32_t prd = 1000, bool state = 0, bool mode = 0, void (*callback)(void) = nullptr) : TimerMs(prd, state, mode) {
    attach(callback);
  }
};