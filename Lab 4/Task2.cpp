#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    float length, width;

public:
    Rectangle() : length(1.0), width(1.0) {}
    Rectangle(float l, float w) : length(l), width(w) {}
    void area()
    {
        int area = length * width;
        cout << "Area is: " << area << '\n';
    }
    void perimeter()
    {
        int p = 2 * (length + width);
        cout << "Perimater is: " << p << '\n';
    }
    void diagonal()
    {
        float d = sqrt(length * length + width * width);
        cout << "Diagonal is: " << d << '\n';
    }
    void angle()
    {
        double a = atan(width / length);
        cout << "Angle between diagonal and length is: " << a * 180 / 3.1416 << " degrees";
    }
    float getLength() { return length; }
    float getWidth() { return width; }
    void setLW(float l, float w)
    {
        if (l >= 1.0 && l < 20.0)
            length = l;
        else
            cout << "Invalid length";
        if (w >= 1.0 && w < 20.0)
            width = w;
        else
            cout << "Invalid width";
    }
};
int main()
{
    Rectangle r(10.0, 19.0);
    r.area();
    r.perimeter();
    r.diagonal();
    r.angle();
}