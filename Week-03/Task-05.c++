#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BankTransaction {
    private:
        struct Account {
            string accountID;
            string accountTitle;
            double accountBalance;
        };

        std::vector<Account> accounts;

    public:
        BankTransaction() {}

        void open_account(string title, string id, double balance) {
            Account account;
            account.accountID = id;
            account.accountTitle = title;
            account.accountBalance = balance;
            accounts.push_back(account);
        }

        void close_account(string id) {
            for (int i = 0; i < accounts.size(); i++) {
                if (accounts[i].accountID == id) {
                    accounts.erase(accounts.begin() + i);
                    break;
                }
            }
        }

        void add_funds(string id, double amount) {
            for (int i = 0; i < accounts.size(); i++) {
                if (accounts[i].accountID == id) {
                    accounts[i].accountBalance += amount;
                    break;
                }
            }
        }

        void remove_funds(string id, double amount) {
            for (int i = 0; i < accounts.size(); i++) {
                if (accounts[i].accountID == id) {
                    if (accounts[i].accountBalance - amount >= 0) {
                        accounts[i].accountBalance -= amount;
                    } else {
                        std::cout << "Account overdrawn. Cannot remove funds." << std::endl;
                    }
                    break;
                }
            }
        }

        void transfer_funds(string from_id, string to_id, double amount) {
            int from_index, to_index;
            for (int i = 0; i < accounts.size(); i++) {
                if (accounts[i].accountID == from_id) {
                    from_index = i;
                } else if (accounts[i].accountID == to_id) {
                    to_index = i;
                }
            }
            if (accounts[from_index].accountBalance - amount >= 0) {
                accounts[from_index].accountBalance -= amount;
                accounts[to_index].accountBalance += amount;
            } else {
                std::cout << "Account overdrawn. Cannot transfer funds." << std::endl;
            }
        }

        void request_report(string id) {
            for (int i = 0; i < accounts.size(); i++) {
                if (accounts[i].accountID == id) {
                    std::cout << "Account ID: " << accounts[i].accountID << std::endl;
                    std::cout << "Account Title: " << accounts[i].accountTitle << std::endl;
                    std::cout << "Account Balance: " << accounts[i].accountBalance << std::endl;
                    std::cout << std::endl;
                }
            }
        }
};

int main() {
    BankTransaction bank;

    bank.open_account("Wali Yar", "2325", 1000);
    bank.open_account("Wali Yar", "4561", 2000);

    bank.add_funds("2323", 500);
    bank.remove_funds("4561", 500);

    bank.transfer_funds("2325", "4561", 250);

    bank.request_report("4561");

    return 0;
}

