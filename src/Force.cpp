#include "Force.h"


vector gravityForce(const planet& a1, const planet& a2)
{
    double d = a1.distance(a2);
    
    if(abs(d) <= 0.1) {
        return  vector(0, 0);
    }
    double normF = -G*a2.getMass()*a1.getMass()/(d*d);
    vector u12(a2.getPos(), a1.getPos() );
    u12 = 1./abs(u12) * u12; // Normalize
    return normF*u12;
}