#ifndef FORCE_H
#define FORCE_H

#include "Planet.h"


#define G 6.674e-11 // m^3.kg^-1.s^-2

vector gravityForce(const planet& a1, const planet& a2);

#endif