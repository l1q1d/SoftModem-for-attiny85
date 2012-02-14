#include <SoftModemTiny.h>
#include <ctype.h>



SoftModemTiny modem;

void setup()
{
  modem.begin();
}

void loop()
{
    modem.write(0xff);
      modem.write(0x11);
}
