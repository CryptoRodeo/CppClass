// Demonstrating a Student struct
#include <iostream>

using namespace std;

struct Student
{
    int creditHours;
    double gradePointAverage;
};

int main()
{
    Student sophomore;
    const int HOURS_REQUIRED_TO_GRADUATE = 120;
    int hoursRemaining;

    cout << "Please enter a student's credit hours ";
    cin >> sophomore.creditHours;
    cout << "Please enter the student's grade point average ";
    cin >> sophomore.gradePointAverage;

    cout << "The number of credit hours is " <<
    sophomore.creditHours << endl;
    cout << "The grade point average is " <<
    sophomore.gradePointAverage << endl;

    hoursRemaining = HOURS_REQUIRED_TO_GRADUATE -
    sophomore.creditHours;
    cout << "This student needs " << hoursRemaining <<
    " more credit hours to graduate" << endl;

    return 0;
}
