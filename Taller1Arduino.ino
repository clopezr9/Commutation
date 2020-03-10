//#define VC 22
//#define AC 23
//#define RC 24
//#define VP 25
//#define RP 26
//#define BT 37
//#define BT2 31
//
//long TInicial, TiempoVC, TiempoQueLleva;
//bool boton;
//void setup() {
//  // put your setup code here, to run once:
//  pinMode(RC,OUTPUT);
//  pinMode(VC,OUTPUT);
//  pinMode(AC,OUTPUT);
//  pinMode(VP,OUTPUT);
//  pinMode(RP,OUTPUT);
//  pinMode(BT,INPUT);
//  Serial.begin(9600);
//  
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  digitalWrite(RC,HIGH);
//  delay(1000);
//  digitalWrite(RP,LOW);
//  digitalWrite(VP,HIGH);
//  delay(3000);
//  digitalWrite(VP,LOW);
//  delay(500);
//  digitalWrite(VP,HIGH);
//  delay(500);
//  digitalWrite(VP,LOW);
//  delay(500);
//  digitalWrite(VP,HIGH);
//  delay(500);
//  digitalWrite(VP,LOW);
//  delay(500);
//  digitalWrite(VP,HIGH);
//  delay(500);
//  digitalWrite(VP,LOW);
//  digitalWrite(RP,HIGH);
//  delay(1000);
//  digitalWrite(RC,LOW);
//  digitalWrite(VC,HIGH);
//  Serial.println("Verde ON");
//  TInicial=millis();
//  TiempoVC=5000;
//  boton = 1;
//  while(millis()-TInicial<=TiempoVC){
//      if(digitalRead(BT)==1 && boton == 1|| digitalRead(BT2)==1 && boton == 1){
//        TiempoQueLleva=millis()-TInicial;
//        Serial.print("El tiempo que lleva en verde es: ");
//        Serial.println(TiempoQueLleva);
//        TiempoVC=(TiempoVC-(millis()-TInicial))/2;
//        Serial.print("Tiempo de espera es: ");
//        Serial.println(TiempoVC);
//        boton = 0;
//     }
//  }
//  digitalWrite(VC,LOW);
//  delay(500);
//  digitalWrite(VC,HIGH);
//  delay(500);
//  digitalWrite(VC,LOW);
//  delay(500);
//  digitalWrite(VC,HIGH);
//  delay(500);
//  digitalWrite(VC,LOW);
//  delay(500);
//  digitalWrite(VC,HIGH);
//  delay(500);
//  digitalWrite(VC,LOW);
//  digitalWrite(RP,HIGH);
//
//}
