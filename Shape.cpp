#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double area()
    {
        return 0.0;
    }
};
class Circle : public Shape
{
private:
    double radius;
public:
    Circle(double r)
    {
        radius=r;
    }
    double area()
    {
        return 3.1416 * radius * radius;
    }
};
class Rectangle : public Shape
{
private:
    double width;
    double height;
public:
    Rectangle(double w, double h)
    {
        width=w;
        height=h;
    }
    double area()
    {
        return width * height;
    }
};
class Triangle : public Shape
{
private:
    double base;
    double height;
public:
    Triangle(double b, double h)
    {
        base=b;
        height=h;
    }
    double area()
    {
        return 0.5 * base * height;
    }
};
int main()
{
    Circle circle(5.0);
    Rectangle rectangle(3.0, 6.0);
    Triangle triangle(3.0, 5.0);
    cout << "Area of circle: " << circle.area() << endl;
    cout << "Area of rectangle: " << rectangle.area() << endl;
    cout << "Area of triangle: " << triangle.area() << endl;
    return 0;
}
