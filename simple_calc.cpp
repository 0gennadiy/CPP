#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int znak = 0, a, b;
	char z;
	cout << "������� ��� �����: " << endl;
	cin >> a >> b;

	cout << "+ - �����\n- - ��������\n* - ������������\n/ - �������\n% - �������� �� ר������\n�������� ��������: " << endl;
	cin >> z;

	if (z == '+')
	{
		znak = 1;
		cout << "�� ������� ����� �����." << endl;
	}
	else if (z == '-')
	{
		znak = 2;
		cout << "�� ������� �������� �����." << endl;
	}
	else if (z == '*')
	{
		znak == 3;
		cout << "�� ������� ������������ �����." << endl;
	}
	else if (z == '/')
	{
		znak == 4;
		cout << "�� ������� ������� �����." << endl;
	}
	else if (z == '%')
	{
		znak = 5;
		cout << "�� ������� �������� �� ר������." << endl;
	}

	switch (znak)
	{
	case 1:
		cout << "����� ����� " << a << " � " << b << " ����� " << a + b << endl;
		break;
	case 2:
		cout << "�������� ����� " << a << " � " << b << " ����� " << a - b << endl;
		break;
	case 3:
		cout << "������������ ����� " << a << " � " << b << " ����� " << a * b << endl;
		break;
	case 4:
		cout << "������� ����� " << a << " � " << b << " ����� " << a / b << endl;
		break;
	case 5:
		if (a % 2 == 0)
		{
			cout << "����� " << a << " ר����." << endl;
		}
		else
		{
			cout<< "����� " << a << " ��ר����." << endl;
		}
		
		if (b % 2 == 0)
		{
			cout << "����� " << b << " ר����." << endl;
		}
		else
		{
			cout << "����� " << b << " ��ר����." << endl;
		}
		break;
	default:
		cout << "������� ��������˨���� ��������.";
		break;
	}

	return 0;
}
