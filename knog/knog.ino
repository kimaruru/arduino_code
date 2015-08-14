int op=0;
 
void setup(){
    pinMode(10,INPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
}
 
void loop(){

    
    
    if(digitalRead(10)==LOW){
    while(!(((digitalRead(10))==(HIGH))));
    op++;
    }

     
    switch(op%7){
        case 0:
            digitalWrite(5,LOW);
            digitalWrite(6,LOW);
            digitalWrite(7,LOW);
            digitalWrite(8,LOW);
        break;
 
        case 1:
             digitalWrite(5,HIGH);
             digitalWrite(6,HIGH);
             digitalWrite(7,HIGH);
             digitalWrite(8,HIGH);
        break;
 
        case 2:
            digitalWrite(5,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            digitalWrite(8,HIGH);
            delay(100);
            digitalWrite(5,LOW);
            digitalWrite(6,LOW);
            digitalWrite(7,LOW);
            digitalWrite(8,LOW);
            delay(100);
      break;
 
      case 3:
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          digitalWrite(8,HIGH);
          delay(275);
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,LOW);
          delay(275);
      break;
 
      case 4:
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,HIGH);
          delay(275);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          digitalWrite(8,LOW);
          delay(275);
          digitalWrite(5,HIGH);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,LOW);
          delay(275);
      break;
 
      case 5:
          digitalWrite(5,HIGH);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,LOW);
          delay(275);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          digitalWrite(8,LOW);
          delay(275);
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,HIGH);
          delay(275);
      break;
 
      case 6:
          digitalWrite(5,HIGH);
          digitalWrite(6,LOW);
          digitalWrite(7,HIGH);
          digitalWrite(8,LOW);
          delay(100);
          digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
          digitalWrite(8,HIGH);
          delay(100);
      break;
    } 
}
