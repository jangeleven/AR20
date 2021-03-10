/*
 예제 2.1
 Arduino에서 컴퓨터로 변수와 문자열 전송하기
 */

    int number = 0;           

void setup() {
   Serial.begin(9600);        
   Serial.println("AR20");
}

void loop() {
    Serial.print(number*250);   
    Serial.println(" msec");    
    delay(200);              
    number++;                

    if(number > 20){
      number =0;
    }
}
