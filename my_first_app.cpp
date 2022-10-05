#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n"; // this will output to console hello world
    cout << "my name is Kopkrit." << endl;   
    cout << "today is Wednesday" << endl;

    float annual_salary ;
    cout << "input your annual salary" << endl;
    cin >> annual_salary;


    float monthly_salary = annual_salary / 12;
    cout << annual_salary << endl;
    cout << "your monthly salary is " << monthly_salary << endl;

    int number = 892;
    char character = 'a'; // a character use ' '
    bool yes_or_no = true;
    float average_grade = 8.5;
    double flaot_that_bigger_than_float = 45678979;

    cout << "Int min value is " << INT_MIN << endl;
    cout << INT_MAX + 1 << endl;

    system("pause>0");
}
