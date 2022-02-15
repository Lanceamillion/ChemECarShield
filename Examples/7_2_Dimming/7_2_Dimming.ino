//Define Pins
#define RedLED 3
#define GreenLED 6
#define BlueLED 5

void setup() {
  // put your setup code here, to run once:

  // Pinmode Setup
  pinMode(RedLED, OUTPUT);    // Set the red led pin (pin 3) to be an output pin
  pinMode(GreenLED, OUTPUT);  // Set the green led pin (pin 6) to be an output pin
  pinMode(BlueLED, OUTPUT);   // Set the blue led pin (pin 5) to be an output pin

  analogWrite(RedLED,255);    // Set Red to full on
  analogWrite(GreenLED,50);   // Set green to parially on
  analogWrite(BlueLED, 0);    // Turn off blue
  delay(2000);                // This combination makes orange
  analogWrite(RedLED,0);      // Trun off red
  analogWrite(GreenLED,50);   // Set green to parially on
  analogWrite(BlueLED, 255);  // Set blue to full on
  delay(2000);                // This combination makes light blue
   analogWrite(RedLED,255);   // Set Red to full on
  analogWrite(GreenLED,0);    // Turn off green
  analogWrite(BlueLED, 50);   // Set blue to parially on
  delay(2000);                // This combination makes light pink
  
  digitalWrite(RedLED, LOW);  // Turn them all off
  digitalWrite(GreenLED, LOW);
  digitalWrite(BlueLED, LOW);
}

void loop() {
  //Blink the led Blue to show the program is done
  digitalWrite(BlueLED, HIGH);
  delay(1000);
  digitalWrite(BlueLED, LOW);
  delay(1000);
}
