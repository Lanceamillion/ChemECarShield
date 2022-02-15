//Define Pins
#define AnalogIn A0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);// Set up the serial at 9600 BAUD
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(AnalogIn)); //Collect and transmit data
  delay(500); //Take data every half second
}
