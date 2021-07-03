#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string EmpName;
    int ID;
    int age;
    float salary;
    void getStatus()
    {
        string status;
        if (age <= 25)
        {
            if (salary <= 20000)
                status = "Low";
            else
                status = "Moderate";
        }
        if (age > 25)
        {
            if (salary <= 21000)
                status = "Low";
            else if (salary > 21000 && salary < 60000)
                status = "Moderate";
            else
                status = "High";
        }
        cout << status << " Salaried Person";
    }

public:
    Employee() {}
    void feedInfo(string name, int id, int age, float salary)
    {
        EmpName = name;
        ID = id;
        this->age = age;
        this->salary = salary;
    }
    void showInfo()
    {
        cout << EmpName << ' ' << ID << ' ' << age << ' ' << salary << '\n';
        getStatus();
    }
};
int main()
{
    Employee e;
    e.feedInfo("Mr.X", 190041212, 29, 25000);
    e.showInfo();
}