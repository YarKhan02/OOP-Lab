#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
    private:
        string name;
        int account_number;
        string account_type;
        int balance;
        float rate_of_interest;

    public:
        BankAccount(string n, int an, string at) {
            name = n;
            account_number = an;
            account_type = at;
            balance = 0;
            rate_of_interest = 1.2;
        }

        void deposit(int amount) {
            balance += amount;
        }

        int withdraw(int amount) {
            if (amount > balance) {
                cout << "Not enough balance!" << endl;
                return 0;
            }
            else {
                balance -= amount;
            }

            return amount;
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "Account number: " << account_number << endl;
            cout << "Account type: " << account_type << endl;
            cout << "Current balance: " << balance << endl;
        }

        void rateOfInterest() {
            cout << "Yearly rate of interest is " << rate_of_interest << endl;
        }
};

int main(){
    BankAccount c1("Wali yar khan", 2325, "Saving");

    c1.deposit(60000);
    c1.withdraw(12700);

    c1.display();
}
