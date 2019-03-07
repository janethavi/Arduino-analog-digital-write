
/* Code to control the brightness of the LED(Analog signal)*/ 

int LED1 = 13;

void setup() {
   pinMode(LED1, OUTPUT);
}


void loop() {
  /* Wave strength number is from 0- 255. You can put a number from 0 to 255. */
  
  analogWrite(LED1, 50);  // turn on LED1 and wave strength is 50
  delay(300);                  // wait for 300ms
  analogWrite(LED1, 120);  // turn on LED1 and wave strength is 120
  delay(300);                  // wait for 300ms       
  analogWrite(LED1, 225);  // turn on LED1 and wave strength is 225
  delay(300);                  // wait for 300ms

}
