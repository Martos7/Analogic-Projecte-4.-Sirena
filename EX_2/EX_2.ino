/**********************************************************************************
**                                                                               **
**                                  Projecte 4. Sirena                           **
**                                                                               **
**                                 Programa 2                                    **
**                                                                               **
**********************************************************************************/
// Raúl Martos



const int speaker = 9;        // Speaker pin 9 
const int pot0 = A0;         //  Potenciometre 0 pin A0 
const int pot1 = A1;         // Potenciometre 1 pin A1 
int valorPot0;                 // guardar valor Potenciometre 0 
int valorPot1;                // guardar valor Potenciometre 1 


void setup()
{
  pinMode(speaker, OUTPUT);   // speaker sortida
  pinMode(pot0, INPUT);       // potenciometre 0 Entrada
  pinMode(pot1, INPUT);       // Potenciometre 1 Entrada
}


void loop()
{
  valorPot0 = analogRead(pot0);   // llegir valor potenciòmetre 0
  valorPot1 = analogRead(pot1);   // llegir valor potenciòmetre 1

  tone(speaker, 800, valorPot0);    // El so dura el valor del potenciometre 0
  delay(valorPot0 + valorPot1);  // El delay es fa amb el potenciometre 1 + el valor del potenciometre 0
}



// El potenciometre 0 el que fa és fe mes llarg o mes curt el so del speaker mentres que el potenciometre 1 el que fa és posar més delay o menys entre els sons.
