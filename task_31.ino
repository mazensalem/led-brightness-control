// C++ code
//
int light = 0;
bool inc = true;
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  Serial.begin(9500);
}

void loop()
{
  analogWrite(3, light);
  if (digitalRead(2)){
    light++;
  }
  if (digitalRead(4)){
    light--;
  }
  light = constrain(light, 0, 255);
  delay(10);
}