#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    friend double calculateArea(const Rectangle& rect);
};

double calculateArea(const Rectangle& rect) {
    return rect.length * rect.width;
}

int main() {
    Rectangle myRectangle(5.0, 3.0);

    double area = calculateArea(myRectangle);

    cout << "Rectangle Area: " << area << " square units" << endl;

    return 0;
}
