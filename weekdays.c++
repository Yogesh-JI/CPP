#include <iostream>

enum Days {
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Weekend,
    Invalid
};

class DayOfWeek {
private:
    Days day;

public:
    DayOfWeek(int dayNumber) {
        if (dayNumber >= 1 && dayNumber <= 7) {
            day = static_cast<Days>(dayNumber);
        } else if (dayNumber == 0) {
            day = Weekend;
        } else {
            day = Invalid;
        }
    }

    void printDay() {
        switch (day) {
            case Sunday:
                std::cout << "Sunday";
                break;
            case Monday:
                std::cout << "Monday";
                break;
            case Tuesday:
                std::cout << "Tuesday";
                break;
            case Wednesday:
                std::cout << "Wednesday";
                break;
            case Thursday:
                std::cout << "Thursday";
                break;
            case Friday:
                std::cout << "Friday";
                break;
            case Saturday:
                std::cout << "Saturday";
                break;
            case Weekend:
                std::cout << "Weekend";
                break;
            case Invalid:
                std::cout << "Invalid";
                break;
        }
    }
};

int main() {
    int dayNumber;
    std::cin >> dayNumber;

    DayOfWeek dayObj(dayNumber);
    dayObj.printDay();

    return 0;
}
