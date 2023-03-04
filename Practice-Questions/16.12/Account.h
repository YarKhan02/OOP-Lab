#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
        int balance;
    
    public:
        Account(int);
        void credit(int);
        void debit(int);
        int getbalance();
};