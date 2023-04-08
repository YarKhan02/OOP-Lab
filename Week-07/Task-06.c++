#include <iostream>

using namespace std;

class BankAccount {
    protected:
        int accountID;
        double balance;
    public:
        BankAccount(int accountID, double balance) {
            this->accountID = accountID;
            this->balance = balance;
        }
        void balanceInquiry() {
            cout << "Account ID: " << accountID << endl;
            cout << "Current balance: " << balance << endl;
        }
};

class CurrentAccount : public BankAccount {
    public:
        CurrentAccount(int accountID, double balance) : BankAccount(accountID, balance) {}
        void amountWithdraw(double amount) {
            if (balance - amount >= 5000) {
                balance -= amount;
                cout << "Amount withdrawn: " << amount << endl;
                cout << "New balance: " << balance << endl;
            }
            else {
                cout << "Insufficient balance" << endl;
            }
        }
        void amountDeposit(double amount) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
            cout << "New balance: " << balance << endl;
        }
};

class SavingAccount : public BankAccount {
    public:
        SavingAccount(int accountID, double balance) : BankAccount(accountID, balance) {}
        void amountWithdraw(double amount) {
            if (balance - amount >= 10000) {
                balance -= amount;
                cout << "Amount withdrawn: " << amount << endl;
                cout << "New balance: " << balance << endl;
            }
            else {
                cout << "Insufficient balance" << endl;
            }
        }
        void amountDeposit(double amount) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
            cout << "New balance: " << balance << endl;
        }
};

int main() {
    CurrentAccount ca(12345, 10000);
    ca.balanceInquiry();
    ca.amountWithdraw(4000);
    ca.amountDeposit(2000);
    ca.amountWithdraw(7000);

    cout << endl;

    SavingAccount sa(54321, 15000);
    sa.balanceInquiry();
    sa.amountWithdraw(12000);
    sa.amountDeposit(5000);
    sa.amountWithdraw(6000);

    return 0;
}
