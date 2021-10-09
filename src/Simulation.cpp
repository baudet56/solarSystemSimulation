#include "Simulation.h"

simulation::simulation(const universe& s, const double& dt, const double tmax) 
: _s(s)
{
    _s = s;
    _dt = dt;
    _tmax = tmax;
    _s.init();
}

void simulation::launch()
{
    vector newAcceleration(0, 0);
    for(double t = 0; t<_tmax; t+=_dt) {


        for(planet* p: _s.getPlanet()){
            newAcceleration = 1/(*p).getMass() * _s.getGravityForce(*p);
            (*p).leapFrog(newAcceleration, _dt);
            (*p).save();
        }
    }
    return;
}