#include <VarSpeedServo.h>

//usar o fio branco

VarSpeedServo servo; 

int alavanca = 3;
int indice = 1;
int valor = 1;
int inicio = 180;
int final = 80;
void setup()
{
  pinMode(alavanca, INPUT);
  servo.attach(3);
  servo.write(inicio*indice);
  Serial.begin(9600);
}
void loop()
{
  Serial.println(valor);
  if (digitalRead(alavanca) == HIGH) { //define reacoes
    valor = random(1, 3 + 1);
    if (valor > 3); // testar sem esse
    {
      valor = 1;
    }
    if ( valor == 1)
    {
     reacao1(); 
    }
    else if ( valor == 2) 
    {
     reacao2();
    }
    else if ( valor == 3) 
    {
     reacao3();
    }
    valor +=1; // testar sem esse
    }
  }

void reacao1()
{
  servo.write(final*indice, 200, true);
  delay(1000);
  servo.write(inicio*indice, 60, true);
}
void reacao2()
{
  servo.write(final*indice, 200, true);
  for(int angulo = 0;angulo < inicio; angulo++){
    servo.write(angulo*indice);
    delay(50);  
  }
}
void reacao3()
{
  servo.write(140*indice, 210, true);
  delay(100);
  servo.write(100*indice, 20, true);
  servo.write(final*indice, 200, true);
  delay(50);
  servo.write(inicio*indice, 200, true);
} //é possível colocar mais reaç
