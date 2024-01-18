#include<iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    bool isValidDate() const {
        if (year < 0) {
            return false;
        }

        if (month < 1 || month > 12) {
            return false;
        }

        if (day < 1 || day > daysInMonth()) {
            return false;
        }

        return true;
    }

    int daysInMonth() const {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    return 29;  // Leap year
                } else {
                    return 28;  // Non-leap year
                }
            default:
                return 0;  // Invalid month
        }
    }
};

int main() {
    
    Date myDate(31, 01, 2022);

   
    cout << "Initial Date: " << myDate.getDay() << "/" << myDate.getMonth() << "/" << myDate.getYear() << "\n";

    
    if (myDate.isValidDate()) {
        cout << "The date is valid.\n";
    } else {
        cerr << "Error: Invalid date.\n";
    }

    return 0;
}

