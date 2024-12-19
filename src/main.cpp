#include <Arduino.h>
#include <BluetoothSerial.h>

#include "../include/door.h"
#include "../include/bluetooth.h"

static Door door;
static Bluetooth *bluetooth;

void setup()
{
  Serial.begin(115200);
  bluetooth = new Bluetooth("ESP32");
}

void loop()
{
  bluetooth->Trigger("run", []()
                     { door.Signal(); });
  door.Operate();
  sleep(1);
}