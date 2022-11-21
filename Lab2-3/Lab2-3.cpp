#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Enter 2 numbers: ";
	cin >> a >> c;

	cout << "Choose a method" << endl <<
		"1 - addition" << endl <<
		"2 - subtraction" << endl <<
		"3 - multiplication" << endl <<
		"4 - division" << endl;
	cin >> b;
	switch (b)
	{
	case 1:
		cout << "When adding " << a << " " << c << " we get: " << a + c << endl;
		break;
	case 2:
		cout << "When subtracting " << a << " " << c << " we get: " << a - c << endl;
		break;
	case 3:
		cout << "When multiplying " << a << " " << c << " we get: " << a * c << endl;
		break;
	case 4:
		if (a == 0 || c == 0)
		{
			cout << "Division by 0 is not possible!";
		}
		else
		{
			cout << "When dividing " << a << " " << c << " we get: " << (float)a / c << endl;
		}
		break;
	default:
		cout << "Error!" << endl;
		break;
	}
}