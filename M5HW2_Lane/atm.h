#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED

using namespace std;

class Atm
{
private:
    float balance;

public:
    Atm();
    void withdraw();
    void deposit();
    void checkBalance();
};

class SafeAtm
{
    void withdraw();
    void deposit();
};

class SecureAtm
{
private:
    int pin;

public:
    void SetPin();
};

#endif // ATM_H_INCLUDED
