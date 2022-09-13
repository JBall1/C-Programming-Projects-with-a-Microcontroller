const unsigned long timeInterval = 500; //The time interval at which we will print in mS.

void setup() {
  //This contains actions we will take prior to executing our main loop. In this case, we set
  //our baud rate to 9600 - standard.
  Serial.begin(9600);
}

//Contains your main code to run repeatedly
void loop() {
  /* At the function loops, it will constantly be updating currentTime until
   * the condition of our if statement is met. When it is met it will print
   * our requested line and then set and save our current time to previous time.
   * This allows us to keep track of how long we have been printing. 
   */
  unsigned long currentTime = millis();

  if(currentTime >= timeInterval) {
    Serial.println("Hello World");
    currentTime = 0;
    }

}
