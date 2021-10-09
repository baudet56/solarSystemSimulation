#include "Planet.h"
using namespace std;


planet::planet(const string& name, const vector& position, const vector& speed, const double& radius, const double& mass)
{
    _name = name;
    _position = position;
    _speed = speed;
    _acceleration = vector(0, 0);
    _radius = radius;
    _mass = mass;
}

planet::planet(const planet& p)
{
    _name = p._name;
    _position = p._position;
    _speed = p._speed;
    _acceleration = p._acceleration;
    _radius = p._radius;
    _mass = p._mass;
}




planet::~planet()
{

    std::cout << _name << endl;
    _saveFile.close();
}
void planet::init()
{
    std::cout << _name << std::endl;
    _saveFile.open("./save/" + _name + ".txt");
    _saveFile << _name << ";" << _mass << ";" << _radius << std::endl;
}

planet planet::operator=(const planet& p)
{
    _name = p._name;
    _position = p._position;
    _speed = p._speed;
    _acceleration = p._acceleration;
    _radius = p._radius;
    _mass = p._mass;
    return *this;
}



vector planet::getPos() const
{
    return _position;
}

double planet::getMass() const
{
    return _mass;
}

void planet::leapFrog(const vector& newAcceleration, const double& dt)
{
    _position = _position + dt*_speed + _acceleration*dt*dt/2;
    _speed = _speed + (_acceleration + newAcceleration)*dt/2;
    _acceleration = newAcceleration;
}

double planet::distance(const planet& a) const
{
    vector v(_position, a.getPos());
    return abs(v);
}

void planet::save()
{
    //std::cout << _name << " " << _position << std::endl;
    _saveFile << _position << "\n";
}