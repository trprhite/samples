/*
  Hexbright demo firmware: Momentary
  Andrew Magill  9/2012
  
  Light turns on when the button is down.  That's it.
*/

#include <hexbright.h>
#include <Wire.h>
hexbright hb;

void setup()
{
  hb.init_hardware();
}

void loop()
{
  hb.update();
  if (hb.button_pressed())
    hb.set_light(MAX_LEVEL, MAX_LEVEL, NOW);
  else
    hb.set_light(0, OFF_LEVEL, NOW);
}

