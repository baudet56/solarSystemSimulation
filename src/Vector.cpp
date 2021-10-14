#include "Vector.h"

vector::vector(double x, double y)
{
    _x = x;
    _y = y;
}

vector::vector(const vector& v)
{
    _x = v.getX();
    _y = v.getY();
}

vector::vector(const vector &v1, const vector& v2)
{
    (*this) = v2 - v1;
}


double vector::getX() const
{
    return _x;
}
double vector::getY() const
{
    return _y;
}

double vector::norm() const
{
    return sqrt( _x*_x + _y*_y );
}
double abs(const vector& v)
{
    return v.norm();
}

double vector::scalarProduct(const vector& v) const
{
    return _x*v._x + _y*v._y;
}

vector vector::operator=(const vector& v)
{
    _x = v._x;
    _y = v._y;
    return (*this);
}

vector vector::operator+(const vector& v) const
{
    return vector(_x + v.getX(), _y + v.getY());
}

vector operator*(const double& a, const vector& v)
{
    return vector(a*v.getX(), a*v.getY());
}


vector operator*(const vector& v, const double& a)
{
    return a*v;
}

vector operator/(const vector& v, const double& a)
{
    return 1/a*v;
}

vector vector::operator-() const
{
    return -1*(*this);
}

vector vector::operator-(const vector& v) const
{
    return (*this) + (-v);
}

std::ostream& operator<<(std::ostream& os, vector v)
{
    os << v.getX() << ";" << v.getY();
    return os;
}

