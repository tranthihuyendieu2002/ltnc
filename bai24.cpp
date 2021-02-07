#include <iostream>
using namespace std;

int main()
{
    int day, month, year;
    int month_match[13] = {0, 11, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cin >> day >> month >> year;
    int weekOfDay;
    if (month == 1 || month == 2)
        year--;
    weekOfDay = (day + int(2.6*month_match[month] - 0.2)%7 + year + year/4 - year/100 + year/400)%7;
    switch (weekOfDay){
    case 0: cout << "Sunday"; break;
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    case 4: cout << "Thursday"; break;
    case 5: cout << "Friday"; break;
    case 6: cout << "Saturday"; break;
    }
    return 0;
}

