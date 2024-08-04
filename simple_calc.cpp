#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int znak = 0, a, b;
	char z;
	cout << "ÂÂÅÄÈÒÅ ÄÂÀ ×ÈÑËÀ: " << endl;
	cin >> a >> b;

	cout << "+ - ÑÓÌÌÀ\n- - ÐÀÇÍÎÑÒÜ\n* - ÏÐÎÈÇÂÅÄÅÍÈÅ\n/ - ×ÀÑÒÍÎÅ\n% - ÏÐÎÂÅÐÊÀ ÍÀ ×¨ÒÍÎÑÒÜ\nÂÛÁÅÐÈÒÅ ÄÅÉÑÒÂÈÅ: " << endl;
	cin >> z;

	if (z == '+')
	{
		znak = 1;
		cout << "ÂÛ ÂÛÁÐÀËÈ ÑÓÌÌÓ ×ÈÑÅË." << endl;
	}
	else if (z == '-')
	{
		znak = 2;
		cout << "ÂÛ ÂÛÁÐÀËÈ ÐÀÇÍÎÑÒÜ ×ÈÑÅË." << endl;
	}
	else if (z == '*')
	{
		znak == 3;
		cout << "ÂÛ ÂÛÁÐÀËÈ ÏÐÎÈÇÂÅÄÅÍÈÅ ×ÈÑÅË." << endl;
	}
	else if (z == '/')
	{
		znak == 4;
		cout << "ÂÛ ÂÛÁÐÀËÈ ×ÀÒÑÍÎÅ ×ÈÑÅË." << endl;
	}
	else if (z == '%')
	{
		znak = 5;
		cout << "ÂÛ ÂÛÁÐÀËÈ ÏÐÎÂÅÐÊÓ ÍÀ ×¨ÒÍÎÑÒÜ." << endl;
	}

	switch (znak)
	{
	case 1:
		cout << "ÑÓÌÌÀ ×ÈÑÅË " << a << " È " << b << " ÐÀÂÍÀ " << a + b << endl;
		break;
	case 2:
		cout << "ÐÀÇÍÎÑÒÜ ×ÈÑÅË " << a << " È " << b << " ÐÀÂÍÀ " << a - b << endl;
		break;
	case 3:
		cout << "ÏÐÎÈÇÂÅÄÅÍÈÅ ×ÈÑÅË " << a << " È " << b << " ÐÀÂÍÎ " << a * b << endl;
		break;
	case 4:
		cout << "×ÀÑÒÍÎÅ ×ÈÑÅË " << a << " È " << b << " ÐÀÂÍÎ " << a / b << endl;
		break;
	case 5:
		if (a % 2 == 0)
		{
			cout << "×ÈÑËÎ " << a << " ×¨ÒÍÎÅ." << endl;
		}
		else
		{
			cout<< "×ÈÑËÎ " << a << " ÍÅ×¨ÒÍÎÅ." << endl;
		}
		
		if (b % 2 == 0)
		{
			cout << "×ÈÑËÎ " << b << " ×¨ÒÍÎÅ." << endl;
		}
		else
		{
			cout << "×ÈÑËÎ " << b << " ÍÅ×¨ÒÍÎÅ." << endl;
		}
		break;
	default:
		cout << "ÂÛÁÐÀÍÎ ÍÅÎÏÐÅÄÅË¨ÍÍÎÅ ÄÅÉÑÒÂÈÅ.";
		break;
	}

	return 0;
}
