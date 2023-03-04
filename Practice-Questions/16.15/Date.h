#include <iostream>
using namespace std;

class Date{
    private:
        int date, month, year;

    public:
        Date(int, int, int);

        void setDate(int);
        void setMonth(int);
        void setYear(int);

        int getDate();
        int getMonth();
        int getYear();

        void displayDate();
};