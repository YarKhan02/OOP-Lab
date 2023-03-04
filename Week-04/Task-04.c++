#include <iostream>

using namespace std;

class Pizza{
    private:
        string size;
        int number_of_cheese_toppings, number_of_pepperoni_toppings, number_of_ham_toppings;

    public:
        Pizza(string Size, int numberOfCheeseToppings, int numberOfPepperoniToppings, int numberOfHamToppings){
            size = Size;
            setNumberOfCheeseToppings(numberOfCheeseToppings);
            setNumberOfHamToppings(numberOfHamToppings);
            setNumberOfPepperoniToppings(numberOfPepperoniToppings);
        }

        void setNumberOfCheeseToppings(int numberOfCheeseToppings){
            number_of_cheese_toppings = numberOfCheeseToppings;
        }
        int getNumberOfCheeseToppings(){
            return number_of_cheese_toppings;
        }

        void setNumberOfHamToppings(int numberOfHamToppings){
            number_of_ham_toppings = numberOfHamToppings;
        }
        int getNumberOfHamToppings(){
            return number_of_ham_toppings;
        }

        void setNumberOfPepperoniToppings(int numberOfPepperoniToppings){
            number_of_pepperoni_toppings = numberOfPepperoniToppings;
        }
        int getNumberOfPepperoniToppings(){
            return number_of_pepperoni_toppings;
        }

        int calCost(){
            if (size == "small"){
                return 10 + getNumberOfCheeseToppings()*2 + getNumberOfHamToppings()*2 + getNumberOfPepperoniToppings()*2;
            }
            if (size == "medium"){
                return 12 + getNumberOfCheeseToppings()*2 + getNumberOfHamToppings()*2 + getNumberOfPepperoniToppings()*2;
            }
            if (size == "large"){
                return 14 + getNumberOfCheeseToppings()*2 + getNumberOfHamToppings()*2 + getNumberOfPepperoniToppings()*2;
            }
            return 0;
        }

        string getDescription(){
            return "Pizza size: " + size + "\nNumber Of Cheese Toppings: " + 
            to_string(getNumberOfCheeseToppings()) + "\nNumber Of Ham Toppings: " + to_string(getNumberOfHamToppings()) + 
            "\nNumber Of Pepperoni Toppings: " + to_string(getNumberOfPepperoniToppings());
        }
        
};

int main(){
    Pizza ps("small", 2, 1, 0);

    cout << "Description\n" << ps.getDescription() << endl;
    cout << "Total Cost is " << ps.calCost() << "$\n" << endl;

    Pizza pl("large", 4, 3, 1);

    cout << "Description\n" << pl.getDescription() << endl;
    cout << "Total Cost is " << pl.calCost() << "$" << endl;
}