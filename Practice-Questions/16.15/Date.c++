#include "Date.h"

Date::Date(int d, int m, int y){
    setDate(d);
    setMonth(m);
    setYear(y);
}

void Date::setDate(int d){
    date = d;
}
int Date::getDate(){
    return date;
}

void Date::setMonth(int m){
    if (m > 12){
        month = 1;
    }
    else{
        month = m;
    }
}
int Date::getMonth(){
    return month;
}

void Date::setYear(int y){
    year = y;
}
int Date::getYear(){
    return year;
}

void Date::displayDate(){
    cout << date << "/" << month << "/" << year << endl;
}

int main(){
    Date d(14, 06, 2002);
    d.displayDate();
}