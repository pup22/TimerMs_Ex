#include <TimerMs_Ex.h>

void timer();

// (период, мс), (0 не запущен / 1 запущен), (режим: 0 период / 1 таймер)
TimerMs_Ex tmr(2000, 1, 0, timer);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  tmr.tick();
}

void timer()
{
  Serial.println("timer");
}