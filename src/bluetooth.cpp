#include <BluetoothSerial.h>
#include "../include/bluetooth.h"

Bluetooth::Bluetooth(const char *name)
{
    Bluetooth::SerialBT.begin(name);
}

void Bluetooth::Trigger(const char *label, void (*func)())
{
    if (Bluetooth::SerialBT.available())
    {
        String incoming = Bluetooth::SerialBT.readStringUntil('\n');
        incoming.trim();

        if (incoming.equalsIgnoreCase(label))
        {
            func();
        }
    }
}