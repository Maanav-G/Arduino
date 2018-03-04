void setup() {
   /*
  Defining built-ins: LED_BUILTIN
    Most Arduino boards have a pin connected to an on-board LED in series with a resistor. 
    The constant LED_BUILTIN is the number of the pin to which the on-board LED is connected. 
    Most boards have this LED connected to digital pin 13.
   */

//enbale the digital pin (LED_BUILTIN) as the output
  pinMode(LED_BUILTIN, OUTPUT);
}

//loop runs forever with specified delays 
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the light on (HIGH = Level of Voltage)
  delay(4000);                       // 4 seconds delay
  digitalWrite(LED_BUILTIN, LOW);    // turn the light off (LOW  = Level of Voltage)
  delay(4000);                       // 4 seconds delay
}
