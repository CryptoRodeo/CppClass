#include<iostream>
using namespace std;

struct Employee
{
    int idNumber;
    double hourlySalary;
};

int main()
{
    const double RAISE = 2.77;
    Employee oneStaffMember;
    oneStaffMember.hourlySalary = 10.00;
    oneStaffMember.hourlySalary =
    oneStaffMember.hourlySalary + RAISE;
    cout << "Salary is " <<
    oneStaffMember.hourlySalary << endl;
    cout << "The value of the employee's salary " <<
    "greater than 15 is " <<
    (oneStaffMember.hourlySalary > 15) << endl;
    return 0;
}
