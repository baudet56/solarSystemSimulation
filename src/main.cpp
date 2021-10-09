#include "Simulation.h"
#include <iostream>

#define day 86400
#define month 2592000

int main(int , char const **)
{

    universe u;
    planet sun = planet("sun", vector(0, 0), vector(0, 0), 6.957e8, 1.988e30);
    u.addPlanet( &sun );
    planet earth = planet("earth", vector(15e10, 0), vector(0, 29778), 6371000, 6e24);
    u.addPlanet( &earth );


    simulation s(u, 60, 12*month);
    s.launch();
    return 0;
}

