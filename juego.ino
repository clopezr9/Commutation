//#define SW1 34
//#define SW2 35
//#define SW3 36
//#define SW4 37
//
//int AL1, AL2, AL3;
//long TInicial;
//bool inicio;
//
//void setup() {
//  pinMode(SW1, INPUT);
//  pinMode(SW2, INPUT);
//  pinMode(SW3, INPUT);
//  pinMode(SW4, INPUT);
//  Serial.begin(9600);
//}
//
//void loop() {
//  if (digitalRead(SW1) == 1) {
//    inicio = 1;
//    delay(2000);
//  }
//
//  if (inicio == 1) {
//    delay(2000);
//    juego();
//  }
//}
//
//void juego() {
//  randomSeed(millis());
//  AL1 = random(0, 9);
//  AL2 = random(0, 3);
//  AL3 = random(0, 9);
//
//  Serial.println("El primer numero es:");
//  Serial.println(AL1);
//  Serial.println("El segundo numero es:");
//  Serial.println(AL3);
//  bool gan=0;
//  //suma
//  if (AL2 == 0) {
//    Serial.println("El resultado es:");
//    int resultado = AL1 + AL3;
//    Serial.println(resultado);
//    TInicial = millis();
//    Serial.println("¿Que operación es?");
//    while (millis() - TInicial <= 5000) {
//      if (digitalRead(SW1) == HIGH && millis() - TInicial <= 5000) {
//        Serial.println("Ganaste!!");
//        gan=1;
//        break;
//      } else if (digitalRead(SW2) == HIGH && millis() - TInicial <= 5000 || digitalRead(SW3) == HIGH && millis() - TInicial <= 5000 || digitalRead(SW4) == HIGH && millis() - TInicial <= 5000) {
//        Serial.println("Perdiste!!");gan=1;
//        break;
//      }
//    }
//    
//  } else if (AL2 == 1) {  //resta
//    Serial.println("El resultado es:");
//    int resultado = AL1 - AL3;
//    Serial.println(resultado);
//    TInicial = millis();
//    Serial.println("¿Que operación es?");
//    while (millis() - TInicial <= 5000) {
//      if (digitalRead(SW2) == HIGH && millis() - TInicial <= 5000) {
//        Serial.println("Ganaste!!");
//        gan=1;
//        break;
//      } else if (digitalRead(SW1) == HIGH && millis() - TInicial <= 5000 || digitalRead(SW3) == HIGH && millis() - TInicial <= 5000 || digitalRead(SW4) == HIGH && millis() - TInicial <= 5000) {
//        Serial.println("Perdiste!!");gan=1;
//        break;
//      }
//    }
//
//  } else if (AL2 == 2) {  //multiplicación
//    Serial.println("El resultado es:");
//    int resultado = AL1 * AL3;
//    Serial.println(resultado);
//    TInicial = millis();
//    Serial.println("¿Que operación es?");
//    while (millis() - TInicial <= 5000) {
//      if (digitalRead(SW3) == HIGH && millis() - TInicial <= 5000) {
//        Serial.println("Ganaste!!");
//        gan=1;
//        break;
//      } else if (digitalRead(SW2) == HIGH && millis() - TInicial <= 5000 || digitalRead(SW1) == HIGH && millis() - TInicial <= 5000 || digitalRead(SW4) == HIGH && millis() - TInicial <= 5000) {
//        Serial.println("Perdiste!!");gan=1;
//        break;
//      }
//    }
//    
//  } else if (AL2 == 3) {       //multiplicación
//    Serial.println("El resultado es:");
//    int resultado = AL1 * AL3;
//    Serial.println(resultado);
//    TInicial = millis();
//    Serial.println("¿Que operación es?");
//    while (millis() - TInicial <= 5000) {
//      if (digitalRead(SW4) == HIGH && millis() - TInicial <= 5000) {
//        Serial.println("Ganaste!!");
//        gan=1;
//        break;
//      } else if (digitalRead(SW2) == HIGH && millis() - TInicial <= 5000 || digitalRead(SW3) == HIGH && millis() - TInicial <= 5000 || digitalRead(SW1) == HIGH && millis() - TInicial <= 5000) {
//        Serial.println("Perdiste!!");
//        gan=1;
//        break;
//      }
//    }
//  }
//  if(gan==0)Serial.println("Perdiste!!");
//
//}
