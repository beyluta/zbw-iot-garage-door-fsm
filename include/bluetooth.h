#include <BluetoothSerial.h>

class Bluetooth
{
private:
    BluetoothSerial SerialBT;

public:
    Bluetooth(const char *name);
    void Trigger(const char *label, void (*func)());
};