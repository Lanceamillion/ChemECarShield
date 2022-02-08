//Define Pins
#define RedLED 3

void setup() {
  // put your setup code here, to run once:
  
  pinMode(RedLED, OUTPUT);    // Set the red led pin (pin 3) to be an output pin
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(RedLED, HIGH); // Turn on the led by writing its voltage high
  delay(500);                 // Wait 500 ms while on
  digitalWrite(RedLED, LOW);  // Turn off the led by writing its voltage low
  delay(500);                 // Wait 500 ms while off
}
