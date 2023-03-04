#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

class Invoice{
    private:
        string part_number, part_description;
        int quantity, price_per_item;

    public:
        Invoice(string, string, int, int);

        void setPartNumber(string);
        string getPartNumber();

        void setPartDescription(string);
        string getPartDescription();

        void setQuantity(int);
        int getQuantity();

        void setPricePerItem(int);
        int getPricePerItem();

        int getInvoiceAmount();
        void displayInvoice();
};