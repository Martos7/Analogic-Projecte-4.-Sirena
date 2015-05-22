/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                 Programa3                                     **
**                                                                               **
**********************************************************************************/


const int speaker = 9;        // donar nom al pin 9 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino
const int pot1 = A1;         // donar nom al pin A1 de l’Arduino
int valorPot0;                 // guardar valor del potènciometre  
int valorPot1;


void setup()
{
    pinMode(speaker, OUTPUT);   // speaker SORTIDA
    pinMode(pot0, INPUT);       // pot 0 ENTRADA
    pinMode(pot1, INPUT);       // pot 1 ENTRADA

}
void loop()
{
  valorPot0 = analogRead(pot0);       // llegir valor potenciometre 0
  valorPot1 = analogRead(pot1);       // llegir valor  potenciometre 1

  tone(speaker, valorPot1, valorPot0);  // Amb el potenciomete 0 s'ajusta la durada del so
  delay(2*valorPot0);                // El delay es multiplica per 2 en valor del potenciometre 0
}



// Aquest programa el que fa és un so so el qual és pot augmentar o disminuir el temps amb el potenciometre 0 , i amb el potenciometre 1 el que fem és canviar la frequencia del so per tal que sigui diferent 

