//Define Pins
#define RedLED 3
#define GreenLED 6
#define BlueLED 5
#define Relay 2
#define AnalogIn A0
#define Switch 4


void setup() {
  // put your setup code here, to run once:

  // Step 1: Start at the top
  pinMode(RedLED, OUTPUT);    // Set the red led pin (pin 3) to be an output pin
  pinMode(GreenLED, OUTPUT);  // Set the green led pin (pin 6) to be an output pin
  pinMode(BlueLED, OUTPUT);   // Set the blue led pin (pin 5) to be an output pin
  pinMode(Relay, OUTPUT);     // Set the relay led pin (pin 2) to be an output pin
  
  pinMode(Switch, INPUT_PULLUP);// Set the Switch pin (pin 4) to be an input with internal pullup

  // Step 2: Wait for the switch to be off
  while(digitalRead(Switch)){ //While the switch is off
    //Blink the led red
    digitalWrite(RedLED, HIGH);
    delay(100);
    digitalWrite(RedLED, LOW);
    delay(100);
  }

  // Step 3: Wait for the switch to be on
  while(!digitalRead(Switch)){ //While the switch is off
    //Blink the led yellow
    digitalWrite(RedLED, HIGH);
    digitalWrite(GreenLED, HIGH);
    delay(200);
    digitalWrite(RedLED, LOW);
    digitalWrite(GreenLED, LOW);
    delay(200);
  }

  // Step 4: Turn on the relay
  digitalWrite(Relay, HIGH);

  // Step 5: Wait for the sensor to reach the threashold
  while(analogRead(AnalogIn) < 500 && digitalRead(Switch)){
    //Blink the LED green
    digitalWrite(GreenLED, HIGH);
    delay(500);
    digitalWrite(GreenLED, LOW);
    delay(500);
  }
  
  // Step 6: Turn off hte relay
  digitalWrite(Relay, LOW);
}

void loop() {
  // Step 7: Blink the led Blue to show the program is done
  digitalWrite(BlueLED, HIGH);
  delay(1000);
  digitalWrite(BlueLED, LOW);
  delay(1000);
}
