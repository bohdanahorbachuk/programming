#pragma once
#include <iostream>
using namespace std;

struct Square
{
    double z;
    Square() : z(0.1) {}
    Square(double elem)
    {
        z = (elem > 0.1) ? elem : 0.1;
    }
    double square()
    {
        return z * z;
    }
};
ostream& operator << (ostream& os, const Square& elem)
{
    os << elem.z << " * " << elem.z;
    return os;
}
