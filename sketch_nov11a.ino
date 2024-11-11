int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(15, INPUT);
}

void press(){
  
  bool f1 = 0;
  bool f2 = 0;
  buttonState = digitalRead(15);
  //Serial.println(buttonState+"on");
  if(buttonState == HIGH){
    
    if(f1 == false){
      Serial.println(buttonState+"----Shadow"); //点击功能
      f1 == true;
    }
    if(f2 == false){
      buttonState == 0;
      buttonState = digitalRead(15);
      int i;
      //Serial.println(buttonState+"----1");
      for(i = 0; i <= 100  ; i++)
      {
        //Serial.println(buttonState+"----2");
        buttonState = digitalRead(15);
        if(buttonState == 0)  break;
        delay(10);
      }
      //Serial.println(buttonState+"----3");
      if(i > 100){

        Serial.println(buttonState+"----Tomato"); //长按功能
        f2 = true;
      }

       while(digitalRead(15) == HIGH); delay(20);
    }
  } 
}

void loop() {
  // put your main code here, to run repeatedly:
  //delay(1000);
  bool f1 = 0;
  bool f2 = 0;
  buttonState = digitalRead(15);
  //Serial.println(buttonState+"on");
  if(buttonState == HIGH){
    
    if(f1 == false){
      Serial.println(buttonState+"----Shadow"); //点击功能
      f1 == true;
    }
    if(f2 == false){
      buttonState == 0;
      buttonState = digitalRead(15);
      int i;
      //Serial.println(buttonState+"----1");
      for(i = 0; i <= 100  ; i++)
      {
        //Serial.println(buttonState+"----2");
        buttonState = digitalRead(15);
        if(buttonState == 0)  break;
        delay(10);
      }
      //Serial.println(buttonState+"----3");
      if(i > 100){

        Serial.println(buttonState+"----Tomato"); //长按功能
        f2 = true;
      }

       while(digitalRead(15) == HIGH); delay(20);
    }
  } 
    //while(digitalRead(15) == HIGH); delay(20);
}
