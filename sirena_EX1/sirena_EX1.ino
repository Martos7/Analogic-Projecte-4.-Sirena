/**********************************************************************************
**                                                                               **
**                                 Projecte 4. Sirena                            **
**                                                                               **
**                                 Programa 1                                    **
**                                                                               **
**********************************************************************************/
// Raúl Martos

const int speaker = 9;        // Speaker pin 9 
const int pot = A0;         // Potenciometre pin A0 
int valPot0;                 // guardar valor potenciometre  


void setup()
{
  pinMode(speaker,OUTPUT);   // Speaker sortida
  pinMode(pot,INPUT);        // Potenciometre Entrada
}


void loop()
{
  valPot0 = analogRead(pot);   // llegir valor Potenciometre 
  tone(speaker, 800, valPot0);    // El so dependra del valor del potenciometre ( més rapid o més lent ) 
  delay(2*valPot0);  // La espera entre sons serà donada pel valor del potenciometre
}

// Aquest programa fa un so al qual se li pot augmentar la velocitat o disminuir-la i al disminuirla el que fem també és posar-li més delays entre sons.
