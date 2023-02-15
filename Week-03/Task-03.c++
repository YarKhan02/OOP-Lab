#include <iostream>
using namespace std;

class Car{
    private:
        string model_name;
        int model_year;

    public:
        void setCar(string model, int year){
            model_name = model;
            model_year = year;
        }

        void display(){
            cout << "Model Name" << "\t" << "Model Year" << endl << model_name << "\t" << model_year << endl;
        }

        void compare(Car c1, Car c2){
            if (c1.model_name == c2.model_name){
                cout << "Model Name are same" << endl;
            }
            else{
                cout << "Model Name are not same" << endl;
            }
            if (c1.model_year == c2.model_year){
                cout << "Model Year are same" << endl;
            }
            else{
                cout << "Model Year are not same" << endl;
            }
        }
};

int main(){
    Car c1, c2;

    c1.setCar("Civic", 2019);
    c2.setCar("XNS", 2019);

    c1.compare(c1, c2);
}