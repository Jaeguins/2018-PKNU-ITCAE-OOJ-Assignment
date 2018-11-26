#include <iostream>
#include <string>
using namespace std;
class CDate {
public:
    int year, month, day;
    CDate(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    void print() { cout << year << '-' << month << '-' << day << ' '; }
};
class CTime {
public:
    int hour, minute, second;
    CTime(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void print() { cout << hour << ':' << minute << ':' << second << ' '; }
};
class CDateTime : CDate, CTime {
public:
    string todo;
    CDateTime(int year, int month, int day, int hour, int minute, int second, string todo) :
        CDate(year, month, day), CTime(hour, minute, second) {
        this->todo = todo;
    }
    void print() {
        CDate::print();
        CTime::print();
        cout << "- " << todo << endl;
    }
};

int main() {
    CDateTime t(2018, 11, 22, 13, 03, 00, "assginment");
    t.print();
    getchar();
}
