#include <iostream>
using namespace std;

class BankAccount
{
public:
    int balance = 1000;

    void deposit(int amount)
    {
        balance = balance + amount;
    }

    void withdraw(int amount)
    {
        balance = balance - amount;
    }

    void display()
    {
        cout << "Final Balance = " << balance;
    }
};

int main()
{
    BankAccount b;

    b.deposit(500);
    b.withdraw(300);

    b.display();

    return 0;
}