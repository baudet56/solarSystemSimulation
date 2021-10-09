#ifndef SYSTEM_H
#define SYSTEM_H

#include "Planet.h"
#include "Force.h"
#include <vector>

class universe{
    int _nbPlanet;
    std::vector<planet*> _arrayOfPlanet;
public:
    universe();
    std::vector<planet*> getPlanet() const;
    void init();
    void addPlanet(planet* a);
    vector getGravityForce(const planet& a) const;
};

#endif