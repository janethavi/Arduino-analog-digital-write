/* Code to blink a LED (digital wave)*/
int LED1 = 13; // initialize the port 

void setup() {
   pinMode(LED1, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);   // turn on LED1 
  delay(200);                  // wait for 200ms
  digitalWrite(LED1, LOW);    // turn off LED1
  delay(200);                  // wait for 200ms       
 }
