#include <iostream>
#include <string>
using namespace std;
string e;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, b, c, d;
	cout << "������� ���-�� �������: ";
	cin >> a;
	cout << "������� ���-�� �����: ";
	cin >> b;
	cout << "������� ���-�� ��������: ";
	cin >> c;
	cout << "������� ���������� ������ ������� � �����: ";
	cin >> d;
	cout << "������� � ����� ������� ������ ������� ���������(B,KB,MB,GB): ";
	cin >> e;
	if (a < 1)
	{
		a = a + 1;
	}
	if (b < 1)
	{
		b = b + 1;
	}
	if (c < 1)
	{
		c = c + 1;
	}
	if (e == "b" || e == "B")
	{
		cout << "��� ������ = " << a * b * c * d / 8 << " ����.";
	}
	if (e == "kb" || e == "KB" || e == "kB" || e == "Kb")
	{
		cout << "��� ������ = " << (a * b * c * d) / 8 / 1024 << " ��������.";
	}
	if (e == "mb" || e == "MB" || e == "mB" || e == "Mb")
	{
		cout << "��� ������ = " << (a * b * c * d) / 8 / 1024 / 1024 << " ��������.";
	}
	if (e == "gb" || e == "GB" || e == "gB" || e == "Gb")
	{
		cout << "��� ������ = " << (a * b * c * d) / 8 / 1024 / 1024 / 1024 << " ��������.";
	}
	return 0;
}