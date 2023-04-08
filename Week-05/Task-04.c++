#include <iostream>

using namespace std;

class Shop{
    private:
        string itemName;
        static int numberOfItems;

    public:
        Shop(string in){
            itemName = in;
        }

        string getItemName(){
            return itemName;
        }

        static int getNumberOfItems(){
            return numberOfItems;
        }

        void itemsBought(int n){
            numberOfItems += n;
        }
};

int Shop::numberOfItems = 0;

int main(){
    Shop items[10] = {
        Shop("Bag of Chips"),
        Shop("Bottle of Water"),
        Shop("Candy Bar"),
        Shop("Loaf of Bread"),
        Shop("Dozen Eggs"),
        Shop("Gallon of Milk"),
        Shop("Box of Cereal"),
        Shop("Jar of Peanut Butter"),
        Shop("Carton of Ice Cream"),
        Shop("Can of Soda")
    }; 

    for (int i = 0; i < 10; i++) {
        items[0].itemsBought(i);
        cout << items[i].getItemName() << ": " << Shop::getNumberOfItems() << " bought." << endl;
    }

    return 0;
}