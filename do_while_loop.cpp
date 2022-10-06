#include <iostream>
using namespace std;

void main()
{
    int user_pin = 1234, pin, error_counter = 0;

	do
	{
		cout << "PIN: ";
		cin >> pin;

		if (pin != user_pin)
		{
			cout << "Entered an Incorrect PIN" << endl;
			error_counter++;
		}

	} while (error_counter < 3 && pin != user_pin);

	if (error_counter < 3)
	{
		cout << "your are loging in to...";
	}
	else {
		cout << "blocked...";
	}
}
