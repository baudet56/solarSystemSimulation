#ifndef PLANET_H
#define PLANET_H

#include "Vector.h"
#include <fstream>
#include <string>

class planet
{
    std::string _name;
    std::ofstream _saveFile;
    vector _position;
    vector _speed;
    vector _acceleration;
    double _radius;
    double _mass;
public:
    planet(const std::string& name, const vector& position, const vector& speed,
           const double& radius, const double& mass);
    planet(const planet& p);
    ~planet();
    void init();
    vector getPos() const;
    double getMass() const;
    double distance(const planet& a) const;
    void leapFrog(const vector& newAcceleration, const double& dt);
    void save();

    planet operator=(const planet& p);
};

#endif