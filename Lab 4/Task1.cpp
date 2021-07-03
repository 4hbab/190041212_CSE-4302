#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    int Account_No;
    string Account_Name;
    string Account_type;
    int balance;
    int Min_Balance;

public:
    BankAccount(int no, string name, string type, int abalance, int minbalance) : Account_No(no), Account_Name(name), Account_type(type), balance(abalance), Min_Balance(minbalance) {
        Account_No=no;
        Account_Name=name;
        Account_type=type;
        balance=abalance;
    }
    void showInfo(){
        cout << Account_No << ' ';
        cout << Account_Name << ' ';
        cout << Account_type << ' ';
        cout << balance << '\n';
    }
    void showBalance(){
        cout << balance << '\n';
    }
    void deposit(int bal){
        if(bal<=0) cout << "Cannot deposit this amount!" << '\n';
        else balance += bal;
    }
    void withdraw(int bal){
        if (balance-bal < Min_Balance)
            cout << "Lower than minimum balance!Cannot withdraw!" << '\n';
        else
            balance -= bal;
    }
    void giveInterest(int interest = 3){
        int inst=(interest/100)*balance;
        int net_int=interest-(interest*.1);
        deposit(net_bal);
    }
    ~BankAccount(){
        cout << "Account of " << Account_Name << " with account no " << Account_No << " is destroyed with a balance BDT " << balance;
    }
};
int main()
{
    BankAccount ac(1234, "Mr.X","Savings",5000,1000);
    ac.deposit(1500);
    ac.showBalance();
    ac.withdraw(500);
    ac.showBalance();
    ac.giveInterest(5);
    ac.showInfo();
}
