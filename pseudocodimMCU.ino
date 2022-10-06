/*
    Requeriments mMCU v0.1

    - Informar de l'estat del circuit i si  hi ha error d'alguna manera
    - Si bender està OK, botonera ha d'enviar TSMS_ON, BMS OK i seta tancada ---> Sevcon_ON al Orion BMS
    */

#include <mcp2515_can.h>
void initCAN()
{
  // PRE: Res
  // POS: Initialitzar el CAN i amb cas d'error informar al usuari via un print
}
void initPIN()
{
  // PRE: Res
  // POS: Initcializar la placa amb tots els pins digitals
}
void setup() {
  initCAN();
  initPIN();
}

void loop() {
  if(TSMS_ON==1){
    //Sevcon_ON al Orion BMS
  }
}
