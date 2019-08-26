
int LEDPin= 9;  // Declare LEDPin to be arduino pin 9

void setup() {
  pinMode(LEDPin, OUTPUT); //set LEDPin to be an OUTPUT
}

void loop() {
 for(int fadevalue=0; fadevalue<=255;fadevalue+=5)
{
 analogWrite(LEDPin,fadevalue);
 delay(30);
}
for(int fadevalue=255; fadevalue>=0; fadevalue-=5)
{
 analogWrite(LEDPin, fadevalue);      //Write to the LED
 delay(30);
}
}
