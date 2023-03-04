#include <iostream>
#include <string>

using namespace std;

class Holiday {
    private:
        string name;
        int day;
        string month;

    public:
        Holiday(string Name, int Day, string Month) {
            name = Name;
            day = Day;
            month = Month;
        }

        bool inSameMonth(Holiday *other) {
            if (month == other -> month){
                return true;
            }
            else{
                return false;
            }
            
        }

        string getName() {
            return name;
        }

        int getDay() {
            return day;
        }

        string getMonth() {
            return month;
        }
};

int main(){
    Holiday weekend("Sunday", 6, "July");
    Holiday independenceDay("Independence Day", 4, "July");

    cout << independenceDay.getName() << " is on " << independenceDay.getDay() << " " << independenceDay.getMonth() << "." << endl;

    cout << "Same month: " << independenceDay.inSameMonth(&weekend);
}
