#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>
#include <iostream>

class vector {
    double _x;
    double _y;
public:
    vector(double x=0, double y=0);
    vector(const vector &v);
    vector(const vector &v1, const vector& v2);

    double getX() const;
    double getY() const;

    double norm() const;


    vector operator=(const vector& v);
    vector operator+(const vector& v) const;
    vector operator-() const;
    vector operator-(const vector& v) const;
};
std::ostream& operator<<(std::ostream& os, vector v);

vector operator*(const double& a, const vector& v);
vector operator*(const vector& v, const double& a);
vector operator/(const vector& v, const double& a);

double abs(const vector& v);




#endif