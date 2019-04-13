#define tiempo 200
#define tiempoDelay 200

int encendidoV1[] = {4,8,5,7,6}; 
int encendidoV2[] = {8,4,7,5,6};
void LuzLed1();


void setup()
{ 
  for (int i=0;i<5;i++)
   {
    pinMode(encendidoV1[i],OUTPUT);
    pinMode(encendidoV2[i],OUTPUT);
   }
}

void loop()
{ 
    
    LuzLed1();         
  
}
        
    void LuzLed1()    
    {
      int i;
      for (i=0;i<5;i++)
     { 
      digitalWrite(encendidoV1[i], HIGH);
      delay(tiempo); 
      digitalWrite(encendidoV1[i], LOW);
      delay(tiempoDelay);
     }
     for (i=0;i<5;i++)
     {       
      digitalWrite(encendidoV2[i], HIGH);
      delay(tiempo); 
      digitalWrite(encendidoV2[i], LOW);
      delay(tiempoDelay);
     }
    }     
    



    
