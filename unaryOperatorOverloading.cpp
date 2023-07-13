#include <iostream>
using namespace std;

class Plane
{
    float x, y, z;

public:
    void setPlane(float a, float b, float c)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }
    void putPlane()
    {
        cout << "x, y, z =" << x << y << z << endl;
    }
    void operator++()
    {
        ++this->x;
        ++this->y;
        ++this->z;
    }
};

int main()
{
    Plane p1;
    p1.setPlane(5, 5, 5);
    p1.putPlane();
    p1.operator++();
    p1.putPlane();
}