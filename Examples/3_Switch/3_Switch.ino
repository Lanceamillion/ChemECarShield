//Define Pins
#define Switch 4
#define BlueLED 5

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);// Set up the serial at 9600 BAUD
  pinMode(BlueLED, OUTPUT);     // Set the blue led pin (pin 5) to be an output pin
  
  pinMode(Switch, INPUT_PULLUP);// Set the Switch pin (pin 4) to be an input with internal pullup
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(Switch)){      // If the pin is high AKA switch is open
    Serial.println("Open");     // Print open to serial monitor
    digitalWrite(BlueLED, LOW); // Turn off the led by writing its voltage low
    
  }else{                        // If the pin is low AKA switch is closed
    Serial.println("Closed");   // Print closed to serial monitor
    digitalWrite(BlueLED, HIGH);// Turn on the led by writing its voltage high
  }
}
