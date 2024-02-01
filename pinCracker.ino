#include <DigiCombo.h>
int LED = 1;

void setup()
{
  pinMode(LED, OUTPUT);
  for (int i = 0; i < 256; i++)
  {
    analogWrite(LED, i);
    delay(10);
  }

  DigiCombo.begin();
  DigiCombo.delay(1000);

  DigiCombo.print("1111\n");
  DigiCombo.delay(400);
  DigiCombo.print("1111\n");
  DigiCombo.delay(800);
  for (int i = 1112, counter = 0; i < 10000; i++, counter++)
  {
    if (!(counter % 5))DigiCombo.delay(30000);

    DigiCombo.print(i);
    DigiCombo.print("\n");
    DigiCombo.delay(800);
  }

  DigiCombo.delay(40000);
}
void loop()
{
}
