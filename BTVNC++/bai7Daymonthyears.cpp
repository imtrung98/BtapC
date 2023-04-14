#include <iostream>
using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        // Constructor
        Date(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }
        
        // Getter methods
        int getDay() const {
            return day;
        }
        int getMonth() const {
            return month;
        }
        int getYear() const {
            return year;
        }
        
        // Setter methods
        void setDay(int d) {
            day = d;
        }
        void setMonth(int m) {
            month = m;
        }
        void setYear(int y) {
            year = y;
        }
        
        // Calculate age method
        int calculateAge() const {
            int currentYear = 2023;
            int currentMonth = 4;
            int currentDay = 6;
            int age = currentYear - year;
            if (currentMonth < month || (currentMonth == month && currentDay < day)) {
                age--;
            }
            return age;
        }
        
        // Check holiday method
        bool isHoliday() const {
            if (month == 1 && day == 1) {
                return true; // New Year's Day
            }
            else if (month == 4 && day == 30) {
                return true; // Reunification Day
            }
            else if (month == 5 && day == 1) {
                return true; // Labor Day
            }
            else if (month == 9 && day == 2) {
                return true; // National Day
            }
            else {
                return false;
            }
        }
};

int main() {
    Date today(2, 8, 2001);
    Date holiday(1, 1, 2024);
    cout << "Age: " << today.calculateAge() << endl;
    cout << "Is holiday? " << holiday.isHoliday() << endl;
    return 0;
}
