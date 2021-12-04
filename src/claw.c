#include "main.h"    // includes API.h and other headers
#include "claw.h"

void clawSet(int speedVar) {
  motorSet(5, -speedVar);//wrong port changed from 9 to 5
}
