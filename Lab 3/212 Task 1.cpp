#include <bits/stdc++.h>
using namespace std;

class Counter
{
private:
    int count;

public:
    Counter() : count{0} {}
    void setIncremenetStep(int step_val)
    {
        count += step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count++;
    }
    void resetCount()
    {
        count = 0;
    }
};
int main()
{
    Counter c;
    c.setIncremenetStep(2);
    cout << c.getCount() << ' ';
    c.increment();
    cout << c.getCount() << ' ';
    c.resetCount();
    cout << c.getCount() << ' ';
}