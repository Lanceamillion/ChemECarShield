//Define Pins
#define GreenLED 6
#define AnalogIn A0

int value;  //Declare an integer variable to store the value of the analog read

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);// Set up the serial at 9600 BAUD
  pinMode(GreenLED,OUTPUT);
  
  // Analog inputs dont need to be set up with pinMode()
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(AnalogIn); // Read the value of analog in (a number from 0 to 1023)
  Serial.println(value);        // Println that value to the serial monitor

  if(value > 500){              // If that number is greater than 500                 
    digitalWrite(GreenLED, HIGH);// Turn on the led by writing its voltage high
  }else{                        // If that number is less than or equal to 500
    digitalWrite(GreenLED, LOW); // Turn off the led by writing its voltage low
  }
}
