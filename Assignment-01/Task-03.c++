#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class HeartRates{
    private:
        string first_name;
        int day, month, year, id;

    public:
        HeartRates(string firstName, string ID, int Day, int Month, int Year){
            setFirstName(firstName);
            setID(ID);
            setDay(Day);
            setMonth(Month);
            setYear(Year);
        }

        void setFirstName(string firstName){
            first_name = firstName;
        }
        string getFirstName(){
            return first_name;
        }

        void setID(string ID){
            string str;
            str = ID[6];
            int n = stoi(str);

            id = n;
        }
        int getID(){
            return id;
        }

        void setDay(int Day){
            day = Day;
        }
        int getDay(){
            return day;
        }

        void setMonth(int Month){
            month = Month;
        }
        int getMonth(){
            return month;
        }

        void setYear(int Year){
            year = Year;
        }
        int getYear(){
            return year;
        }

        int getAge(){
            int x = 2023 - year;

            if (2 < month){
                x -= 1;
            }

            return x;
        }

        int getMaximumHeartRate(){
            int y = 220 - getAge();

            return y;
        }

        string getTargetHeartRate(){
            int lowerTargetHeartRate = getMaximumHeartRate() * 0.5;
            int upperTargetHeartRate = getMaximumHeartRate() * 0.85;

            string str = to_string(lowerTargetHeartRate) + " - " + to_string(upperTargetHeartRate);

            return str;
        }
};

int main(){
    HeartRates person("Wali Yar", "22K-4734", 14, 6, 2002);

    cout << "Name: " <<  person.getFirstName() << endl;
    cout << "Date of Birth: " << person.getDay() << "/" << person.getMonth() << "/" << person.getYear() << endl;
    cout << "Age: " << person.getAge() << " years" << endl;
    cout << "Maximum Heart Rate: " << person.getMaximumHeartRate() << " beats per minute" << endl;
    cout << "Target Heart Rate Range: " << person.getTargetHeartRate() << " beats per minute" << endl;
}