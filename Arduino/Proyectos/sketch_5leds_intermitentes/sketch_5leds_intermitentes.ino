#define tiempo 1100
#define tiempoDelay 200
 

int encendidoV1[] = {4,8,5,7,6}; 
int encendidoV2[] = {8,4,7,5,6};
int encendidoV3[] = {4,5,6,7,8};
void LuzLed1();


void setup()
{ 
  for (int i=0;i<5;i++)
   {
    pinMode(encendidoV1[i],OUTPUT);
    pinMode(encendidoV2[i],OUTPUT);
     pinMode(encendidoV3[i],OUTPUT);
   }
}

void loop()
{ 
    
    LuzLed1();         
  
}
        
    void LuzLed1()    
    {
      int i;
      int acumuladorTime;  
       acumuladorTime=200;   
      for (i=0;i<5;i++)
     {      
      
      digitalWrite(encendidoV1[i], HIGH);
      delay(tiempo-acumuladorTime); 
      digitalWrite(encendidoV1[i], LOW);
      delay(tiempoDelay);
      acumuladorTime=acumuladorTime+200;              
     }      
     acumuladorTime=200;
     for (i=0;i<5;i++)
     {              
      digitalWrite(encendidoV2[i], HIGH);
      delay(tiempo-acumuladorTime); 
      digitalWrite(encendidoV2[i], LOW);
      delay(tiempoDelay);
      acumuladorTime=acumuladorTime+200;  
     }   
     /*for (i=0;i<5;i++)
     {       
      digitalWrite(encendidoV3[i], HIGH);
      delay(150); 
      digitalWrite(encendidoV3[i], LOW);
      delay(0);
     }*/
       for (i=-4;i<5;i++)
     {       
      digitalWrite(encendidoV3[abs(i)], HIGH);
      delay(150); 
      digitalWrite(encendidoV3[abs(i)], LOW);
      delay(0);
      
     }
    }     
    



    
