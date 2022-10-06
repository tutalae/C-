
#include <iostream>
using namespace std;

int main()
{
    int number, reversed_number = 0;
    cout << "Number :";
    cin >> number;

    while (number != 0)
    {
        reversed_number *= 10;
        reversed_number += number % 10;
        number /= 10;
    }

    cout << "reversed number : " << reversed_number;

    system("pause>0");
}
