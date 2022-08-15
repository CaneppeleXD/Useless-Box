int valor = 1;

void setup()
{
  
}
void loop()
{
  if (digitalRead(A0) == HIGH) { //define reacoes
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
  // por reacao
}
void reacao2()
{
  //por reacao 
}
void reacao3()
{
  //por reacao
}
