#ifndef SIMULATION_H
#define SIMULATION_H

#include "Universe.h"

class simulation {
    universe _s;
    double _dt;
    double _tmax;
public:
    simulation(const universe& s, const double& dt, const double tmax);
    void launch();
};


#endif