//Define Pins
#define RedLED 3
#define GreenLED 6
#define BlueLED 5
#define Relay 2
#define AnalogIn A0
#define Switch 4

void setup() {
  // put your setup code here, to run once:
  
  // Pinmode Setup
  pinMode(RedLED, OUTPUT);    // Set the red led pin (pin 3) to be an output pin
  pinMode(GreenLED, OUTPUT);  // Set the green led pin (pin 6) to be an output pin
  pinMode(BlueLED, OUTPUT);   // Set the blue led pin (pin 5) to be an output pin
  pinMode(Relay, OUTPUT);     // Set the relay led pin (pin 2) to be an output pin
  
  pinMode(Switch, INPUT_PULLUP);// Set the Switch pin (pin 4) to be an input with internal pullup

  //Startup Sequence
  digitalWrite(RedLED, HIGH);  // Red Test
  delay(500);
  digitalWrite(RedLED, LOW);
  digitalWrite(GreenLED, HIGH);// Green Test
  delay(500);
  digitalWrite(GreenLED, LOW);
  digitalWrite(BlueLED, HIGH); //Blue Test
  delay(500);
  digitalWrite(BlueLED, LOW);

  digitalWrite(Relay, HIGH);   //Test Relay
  delay(150);
  digitalWrite(Relay, LOW);
    
  //Wait for the switch to be off and the analog input to be below the threahsold
  while(digitalRead(Switch) || analogRead(AnalogIn) > 500){
    //Blink the led red
    digitalWrite(RedLED, HIGH);
    delay(100);
    digitalWrite(RedLED, LOW);
    delay(100);
  }
}

void loop() {
  //Blink the led Blue to show the program is done
  digitalWrite(BlueLED, HIGH);
  delay(1000);
  digitalWrite(BlueLED, LOW);
  delay(1000);
}
