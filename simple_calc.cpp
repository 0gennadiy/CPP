#include <iostream>
using namespace std;

int main()
{
	int znak = 0, a, b;
	char z;
	cout << "\t\t\tENTER TWO NUMBERS: " << endl;
	cin >> a >> b;

	cout << "\t\t\t+\n\t\t\t-\n\t\t\t*\n\t\t\t/\n\t\t\t%\n\t\t\tCHOOSE AN ACTION: " << endl;
	cin >> z;

	if (z == '+')
	{
		znak = 1;
		cout << "\t\t\tYOU HAVE CHOSEN \"+\"." << endl;
	}
	else if (z == '-')
	{
		znak = 2;
		cout << "\t\t\tYOU HAVE CHOSEN \"-\"." << endl;
	}
	else if (z == '*')
	{
		znak = 3;
		cout << "\t\t\tYOU HAVE CHOSEN \"*\"." << endl;
	}
	else if (z == '/')
	{
		znak = 4;
		cout << "\t\t\tYOU HAVE CHOSEN \"/\"." << endl;
	}
	else if (z == '%')
	{
		znak = 5;
		cout << "\t\t\tYOU HAVE CHOSEN \"%\"." << endl;
	}

	switch (znak)
	{
	case 1:
		cout << a << " + " << b << " = " << a + b << endl;
		break;
	case 2:
		cout << a << " - " << b << " = " << a - b << endl;
		break;
	case 3:
		cout << a << " * " << b << " = " << a + b << endl;
		break;
	case 4:
		cout << a << " / " << b << " = " << a + b << endl;
		break;
	case 5:
/*					CHETNOST/NECHETNOST																		*/
		if (a % 2 == 0)
		{
			cout << "\t\t\tNUMBER " << a << " IS EVEN." << endl;
		}
		else
		{
			cout << "\t\t\tNUMBER " << a << " IS ODD." << endl;
		}
		
		if (b % 2 == 0)
		{
			cout << "\t\t\tNUMBER " << b << " IS EVEN." << endl;
		}
		else
		{
			cout << "\t\t\tNUMBER " << b << " IS ODD." << endl;
		}
		break;
	default:
		cout << "\t\t\tUNDEFINED ACTION SELECTED.";
		break;
	}

	return 0;
}
