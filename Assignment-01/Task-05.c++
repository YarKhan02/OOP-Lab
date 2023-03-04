#include <iostream>
#include <string>
using namespace std;

class User {
    private:
        int userID[2];
        string name;
        int age;
        double height;
        char gender;
        int shoeSize;

    public:
        User() {
        userID[0] = 0;
        userID[1] = 0;
        name = "";
        age = 0;
        height = 0;
        gender = ' ';
        shoeSize = 0;
        }

    User(string id, string n, int a, double h, char g, int s) {
        extractID(id);
        name = n;
        age = a;
        height = h;
        gender = g;
        shoeSize = s;
    }

    void extractID(string id){
        int l = id.size();

        string str1 = "", str2 = "";

        for (int i = 0; i < l; i++){
            if ((i == 2) || (i == 3)){

            }
            else if (i < 2){
                str1 += id[i];
            }
            else{
                str2 += id[i];
            }
        }

        userID[0] = stoi(str1);
        userID[1] = stoi(str2);
    }

    int* getUserID() {
        return userID;
    }

    string getName() {
        return name;
    }

    void setName(string n) {
        name = n;
    }

    int getAge() {
        return age;
    }

    void setAge(int a) {
        age = a;
    }

    double getHeight() {
        return height;
    }

    void setHeight(double h) {
        height = h;
    }

    char getGender() {
        return gender;
    }

    void setGender(char g) {
        gender = g;
    }

    int getShoeSize() {
        return shoeSize;
    }

    void setShoeSize(int s) {
        shoeSize = s;
    }

    string notifyDemographic() {
        if (age <= 2) {
            return "infant";
        } else if (age >= 3 && age <= 5) {
            return "toddler";
        } else if (age >= 10 && age <= 12) {
            return "child";
        } else if (age >= 13 && age <= 19) {
            return "teenager";
        } else {
            return "adult";
        }
    }
};

class Shoe {
    private:
        int size;
        string width;
        string style;
        string brand;
        string color;
        string demographic;

    public:
        Shoe() {
        size = 0;
        width = "";
        style = "";
        brand = "";
        color = "";
        demographic = "";
        }

    Shoe(int s, string w, string st, string b, string c, string d) {
        size = s;
        width = w;
        style = st;
        brand = b;
        color = c;
        demographic = d;
    }

    int getSize() {
        return size;
    }

    void setSize(int s) {
        size = s;
    }

    string getWidth() {
        return width;
    }

    void setWidth(string w) {
        width = w;
    }

    string getStyle() {
        return style;
    }

    void setStyle(string s) {
        style = s;
    }

    string getBrand() {
        return brand;
    }

    void setBrand(string b) {
        brand = b;
    }

    string getColor() {
        return color;
    }

    void setColor(string c) {
        color = c;
    }

    string getDemographic() {
        return demographic;
    }

    void setDemographic(string d) {
        demographic = d;
    }
};

void displayUserShoeInfo(User* user, Shoe* shoe) {
    cout << "User ID: " << user -> getUserID()[0] << "-" << user -> getUserID()[1] << endl;
    cout << "Name: " << user -> getName() << endl;
    cout << "Age: " << user -> getAge() << endl;
    cout << "Gender: " << user -> getGender() << endl;
    cout << "Height: " << user -> getHeight() << endl;
    cout << "Shoe size: " << shoe -> getSize() << endl;
    cout << "Shoe width: " << shoe -> getWidth() << endl;
    cout << "Shoe style: " << shoe -> getStyle() << endl;
    cout << "Shoe size: " << shoe -> getSize() << endl;
    cout << "Shoe brand: " << shoe -> getBrand() << endl;
    cout << "Shoe color: " << shoe -> getColor() << endl;
    cout << "Demographic: " << shoe -> getDemographic() << endl;
}

int main(){
    User u("22k-4734", "Wali Yar Khan", 20, 175, 'M', 42);
    Shoe s(42, "3-inch", "Sneakers", "Adidas", "Black/White", "Adult");

    displayUserShoeInfo(&u, &s);
}