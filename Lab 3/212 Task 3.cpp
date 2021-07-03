#include <bits/stdc++.h>
using namespace std;

class Medicine
{
private:
    char *name;
    char *genericName;
    double discountPercent;
    double unitPrice;

public:
    Medicine() : unitPrice{0.00}, discountPercent{5.00} {}
    void assignName(char *n, char *gN)
    {
        name = n;
        genericName = gN;
    }
    void assignPrice(double p)
    {
        if (p >= 0)
            unitPrice = p;
    }
    void setDiscountPercent(double percent)
    {
        if(percent>45 || percent<0){
            cout << "ERROR!" << '\n';
            return;
        }
        discountPercent = percent;
    }
    double getSellingPrice(int nos)
    {
        unitPrice= nos*unitPrice*(1-discountPercent/100);
        return unitPrice;
    }
    void display()
    {
        printf("%s (%s) ", name, genericName);
        //cout << name << ' ' << '(' << genericName << ") ";
        printf("has a unit price BDT %.2lf. Current Discount= %.0lf%%", unitPrice, discountPercent);
        //cout << "has a unit price BDT " << unitPrice << '.' << "Current Discount= " << discountPercent << "%" << '.';
    }
};
int main()
{
    Medicine Par;
    Par.assignName("Napa", "Paracetamol");
    Par.assignPrice(0.80);
    Par.setDiscountPercent(10);
    Par.display();
}
