#include "Account.h"

Account::Account(int n){
    if (n < 0){
        balance = 0;
        cout << "Error! Initial balance is invalid" << endl;
        return;
    }
    balance = n;
}

void Account::credit(int n){
    balance += n;
}

void Account::debit(int n){
    int temp;

    temp = balance - n;

    if (temp < 0){
        cout << "Debit amount exceeded account balance" << endl;
        return;
    }

    balance -= n;
}

int Account::getbalance(){
    return balance;
}

int main(){
    Account c1(200);
    Account c2(900);

    c1.credit(300);
    c1.debit(400);
    c1.debit(200);
    
    cout << "Current balance of account c1 is " << c1.getbalance() << endl;

    c2.debit(400);
    c2.debit(200);
    
    cout << "Current balance of account c2 is " << c2.getbalance() << endl;
}