#include "Invoice.h"

Invoice::Invoice(string pn, string pd, int q, int ppt){
    setPartNumber(pn);
    setPartDescription(pd);
    setQuantity(q);
    setPricePerItem(ppt);
}

void Invoice::setPartNumber(string pn){
    part_number = pn;
}
string Invoice::getPartNumber(){
    return part_number;
}

void Invoice::setPartDescription(string pd){
    part_description = pd;
}
string Invoice::getPartDescription(){
    return part_description;
}

void Invoice::setQuantity(int q){
    if (q < 0){
        quantity = 0;
    }
    else{
        quantity = q;
    }
}
int Invoice::getQuantity(){
    return quantity;
}

void Invoice::setPricePerItem(int ppt){
    if (ppt < 0){
        price_per_item = 0;
    }
    else{
        price_per_item = ppt;
    }
}
int Invoice::getPricePerItem(){
    return price_per_item;
}

int Invoice::getInvoiceAmount(){
    if ((price_per_item * quantity) < 0){
        return 0;
    }
    return price_per_item * quantity;
}

void Invoice::displayInvoice(){
    cout << "Invoice\nPart Name: " << getPartNumber() << "\nPart Description: " << getPartDescription() << endl;
    cout << "Quantity: " << getQuantity() << "\nPrice Per Item: " << getPricePerItem() << endl;
    cout << "Total Amount Purchased: " << getInvoiceAmount() << endl << endl;
}

int main(){
    Invoice p1("HM-101", "Hammer-Made in Japan", 2, 120);
    p1.displayInvoice();

    Invoice p2("SD-57", "Screw Driver - Made in Germany", 17, 35);
    p2.displayInvoice();
}