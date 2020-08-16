int buzzer=9;       //penginisialan pin buzzer masuk pin 9
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);      //buzzer sebagai OUTPUT
Serial.begin(9600);          //baudrate arduino atau Serial komunikasi
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(buzzer,HIGH); //buzzer bunyi
delay(1000);   //dengan waktu 1000 ms
digitalWrite(buzzer,LOW); //buzzer mati
delay(1000);   //dengan waktu 1000 ms
}
