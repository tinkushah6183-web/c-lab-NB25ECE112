#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string owner;
    double balance;
public:
    void open(const string &name, double initial);
    void deposite(double amt);
    bool withdraw(double amt);
    double getBalance() const;
    string getOwner() const;
};

void BankAccount::open(const string &name, double initial) {
    owner = name;
    balance = (initial >= 0) ? initial : 0;
}

void BankAccount::deposite(double amt) {
    if (amt > 0) balance += amt;
}




bool BankAccount::withdraw(double amt) {
    if (amt>0 && amt <= balance){balance -= amt;return true;}
    return false;
}

double BankAccount::getBalance() const {return balance;}
string BankAccount::getOwner() const {return owner;}

int main() {
    BankAccount a ;
    a.open("asha",1000);
    a.deposite(500);
    if (!a.withdraw(2000)) cout << "withdraw denied(insufficient)\n";
a.withdraw(300);
cout<<a.getOwner()<<"balance="<<a.getBalance()<<endl;
    return 0;
}