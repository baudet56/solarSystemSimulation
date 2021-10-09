#include "Universe.h"

universe::universe()
{
    _nbPlanet = 0;
    _arrayOfPlanet = std::vector<planet*>();
}

std::vector<planet*> universe::getPlanet() const
{
    return _arrayOfPlanet;
}

void universe::init()
{
    for(planet* p: _arrayOfPlanet) (*p).init();
}
void universe::addPlanet(planet* a)
{
    _nbPlanet += 1;
    _arrayOfPlanet.push_back(a);
}

vector universe::getGravityForce(const planet& a) const
{
    vector f(0, 0);
    for(planet* p: _arrayOfPlanet){
        f = f + gravityForce(a, (*p));
    }
    return f;
}
