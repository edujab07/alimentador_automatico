//DEFINIMOS EL ID Y EL NOMBRE QUE NOS PROPORCIONA BLYNK AL CREAR EL PROYECTO
#define BLYNK_TEMPLATE_ID "TMPL2TL8asqf9"
#define BLYNK_TEMPLATE_NAME "AlimentadorRocko"


#define BLYNK_PRINT Serial
#define APP_DEBUG
#include <Servo.h>
#include "BlynkEdgent.h"

//DEFINIMOS EL SERVO A UTILIZAR Y LE DAMOS UN NOMBRE
Servo servo;

void setup()
{
  Serial.begin(115200);
  delay(100);
  BlynkEdgent.begin();
  servo.attach(15);
}

void loop() {
  BlynkEdgent.run();
}

//NOS PERMITE CONTROLAR SERVO CON SLIDER EN LA APP
BLYNK_WRITE(V1){
  servo.write(param.asInt());
}

