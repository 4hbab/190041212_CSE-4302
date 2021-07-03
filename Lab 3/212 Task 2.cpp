#include <bits/stdc++.h>
using namespace std;

class RationalNumber
{
private:
    int denominator;
    int numerator;

public:
    RationalNumber() : numerator{0}, denominator{0} {}
    void assign(int num, int denom)
    {
        numerator = num;
        denominator = denom;
        if (denominator == 0)
        {
            cout << "ERROR" << '\n';
            exit(0);
        }
    }
    double convert()
    {
        double x = ((double)numerator / (double)denominator);
        return x;
    }
    void invert()
    {
        if (numerator == 0)
        {
            cout << "ERROR!" << '\n';
            exit(0);
        }
        int temp = numerator;
        numerator = denominator;
        denominator = temp;
    }
    void print()
    {
        cout << "The Rational Number is " << numerator << "/" << denominator << '\n';
    }
};
int main()
{
    RationalNumber r;
    r.assign(2, 0);
    r.print();

    cout << r.convert() << '\n';

    r.invert();
    r.print();
}
