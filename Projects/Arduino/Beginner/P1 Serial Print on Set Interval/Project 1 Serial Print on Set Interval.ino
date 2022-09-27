const int timeInterval = 2000; //The time interval at which we will print in mS.
int previousTime = 0; //This will hold the previous value of time once a loop iteration has
                       // completed.


void setup() {
  //This contains actions we will take prior to executing our main loop. In this case, we set
  //our baud rate to 9600 - standard.
  Serial.begin(9600);
}

//Contains your main code to run repeatedly
void loop() {
  /* At the function loops, it will constantly be updating currentTime 
     until the condition of our if statement is met. When it is met it  
     will print our requested line and then set and save our current time  
     to previous time. This allows us to keep track of how long we have 
     been printing. 
   */
  unsigned int currentTime = millis();
  if(currentTime - previousTime >= timeInterval) {
    Serial.println("Hello World");
    previousTime = currentTime;
    }
}
