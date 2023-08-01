#include <iostream>
using namespace std;

class Polygon
{
public:
    int length;
    int height;

    virtual int area() = 0;
};

class Rectange : public Polygon
{

public:
    Rectange(int length, int height)
    {
        this->length = length;
        this->height = height;
    }
    int area()
    {
        return length * height;
    }
};

class Triangle : public Polygon
{
public:
    Triangle(int length, int height)
    {
        this->length = length;
        this->height = height;
    }
    int area()
    {
        return 0.5 * length * height;
    }
};

int main()
{
    Rectange r1(2, 3);
    Triangle r2(2, 3);

    cout << "area :" << r1.area();
    cout << "area :" << r2.area();
}