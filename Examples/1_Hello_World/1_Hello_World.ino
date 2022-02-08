void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);//Set up the serial at 9600 BAUD
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("Hello ChemE");// Print Hello ChemE
  delay(1000);// Wait 1000 ms so it dosent go too fast
}
