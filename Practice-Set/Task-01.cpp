#include <iostream>
#include <vector>
using namespace std;

class dayType {
    private:
        string day;
        vector<string> week = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

    public:
        dayType(string d) {
            setDay(d);
        }

        void setDay(string d) {
            day = d;
        }

        string getDay() {
            return day;
        }

        void printDay() {
            cout << "Current Day: " << day << endl;
        }

        string nextDay() {
            for (int i = 0; i < week.size(); i++) {
                if (week[i] == day) {
                    return week[i + 1];
                }
            }
        }

        string prevDay() {
            for (int i = 0; i < week.size(); i++) {
                if (week[i] == day) {
                    return week[i - 1];
                }
            }
        }

        string certainDay(int n) {
            int x, y;

            for (int i = 0; i < week.size(); i++) {
                if (week[i] == day) {
                    x = i;
                    //break;
                }
            }

            y = x + n;

            while (y >= 6) {
                y -= 7;
            }

            return week[y];
        }
};

int main(){
    dayType d("Tue");

    d.printDay();
    cout << "Next Day: " << d.nextDay() << endl;
    cout << "Previous Day: " << d.prevDay() << endl;
    cout << "Certain Day: " << d.certainDay(13);
}