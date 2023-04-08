#include <iostream>
#include <string>
using namespace std;

class zooAnimal {
    private:
        string name;
        int cageNumber;
        int weight;
        static int oldWeight;

    public:
        zooAnimal(string n, int c, int w) {
            name = n;
            cageNumber = c;
            weight = w;
        }

        string getName() {
            return name;
        }

        int getCageNumber() {
            return cageNumber;
        }

        int getWeight() {
            return weight;
        }

        int getOldWeight() {
            return oldWeight;
        }

        void compare(int w, int oldW) {
            int diff = w - oldW;
            if (diff > 0) {
                cout << name << " has gained " << diff << " pounds." << endl;
            } 
            else if (diff < 0) {
                cout << name << " has lost " << -diff << " pounds." << endl;
            } 
            else {
                cout << name << " has not changed weight." << endl;
            }
        }

        static void changeWeight(int w) {
            oldWeight = weight;
            weight = w;
        }

        void display(){
            cout << "Animal name: " << getName() << endl;
            cout << "Cage number: " << getCageNumber() << endl;
            cout << "Current weight: " << getWeight() << endl;
            cout << "Old weight: " << getOldWeight() << endl;
        }
};

int zooAnimal::oldWeight = 0;

int main() {
    zooAnimal lion("Lion", 1, 300);

    lion.compare(350, lion.getWeight());
    zooAnimal::changeWeight(350);
    cout << "New weight: " << lion.getWeight() << endl;
    cout << "Old weight: " << lion.getOldWeight() << endl;

    return 0;
}