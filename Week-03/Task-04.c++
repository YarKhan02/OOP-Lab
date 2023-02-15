#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <ctime>

using namespace std;

class Calendar{
    public:
        Calendar(int start_year) : start_year(start_year), duration(0), month_year(make_tuple(0, 0)) {};

        void set_duration(int duration) {
            this->duration = duration;
        }

        void add_generic_holiday(int day) {
            holidays.push_back(make_tuple(day, 0));
        }

        void add_specific_holiday(int month, int week, int day) {
            holidays.push_back(make_tuple(month, week * 7 + day));
        }

        void set_month_year(int month, int year) {
            this->month_year = make_tuple(month, year);
        }

        void display() {
            if (get<0>(month_year) == 0) {
                return;
            }
            
            int month = get<0>(month_year);
            int year = get<1>(month_year);

            vector<vector<string>> cal(5, vector<string>(7, "  "));
            int starting_day = get_starting_day(month, year);

            int days_in_month = get_days_in_month(month, year);
            for (int i = 0; i < days_in_month; i++) {
                int week = (starting_day + i) / 7;
                int day = (starting_day + i) % 7;

                string date = to_string(i + 1);
                for (auto holiday : holidays) {
                    if (get<0>(holiday) == month && get<1>(holiday) == i) {
                        date = "*" + date;
                        break;
                    }
                }
                cal[week][day] = date;
            }

            cout << get_month_name(month) << " " << year << endl;
            cout << "Mo Tu We Th Fr Sa Su" << endl;
            for (auto week : cal) {
                for (auto day : week) {
                    cout << day << " ";
                }
                cout << endl;
            }
        }

    private:
        int start_year;
        int duration;
        vector<tuple<int, int>> holidays;
        tuple<int, int> month_year;

        int get_starting_day(int month, int year) {
            tm t = {0};
            t.tm_year = year - 1900;
            t.tm_mon = month - 1;
            t.tm_mday = 1;
            mktime(&t);
            return t.tm_wday;
        }

        int get_days_in_month(int month, int year) {
            tm t = {0};
            t.tm_year = year - 1900;
            t.tm_mon = month;
            t.tm_mday = 0;
            mktime(&t);
            return t.tm_mday;
        }

            string get_month_name(int month) {
        switch (month) {
            case 1: return "January";
            case 2: return "February";
            case 3: return "March";
            case 4: return "April";
            case 5: return "May";
            case 6: return "June";
            case 7: return "July";
            case 8: return "August";
            case 9: return "September";
            case 10: return "October";
            case 11: return "November";
            case 12: return "December";
            default: return "";
        }
    }
};

int main() {
    Calendar cal(2020);
    cal.set_duration(1);
    cal.add_generic_holiday(2);
    cal.add_specific_holiday(11, 3, 4);
    cal.set_month_year(2, 2020);
    cal.display();
    return 0;
}
