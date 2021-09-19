#include <iostream>
#include <string>
using namespace std;
string e;
int main()
{
	double a, b, c, d;
	cout << "Enter the number of pages: ";
	cin >> a;
	cout << "Enter the number of lines: ";
	cin >> b;
	cout << "Enter the number of symbol: ";
	cin >> c;
	cout << "Enter the calculus of one character in bits: ";
	cin >> d;
	cout << "Enter in which unit you want to see the result(B,KB,MB,GB): ";
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
		cout << "Text weight = " << a * b * c * d / 8 << " bytes.";
	}
	if (e == "kb" || e == "KB" || e == "kB" || e == "Kb")
	{
		cout << "Text weight = " << (a * b * c * d) / 8 / 1024 << " kilobytes.";
	}
	if (e == "mb" || e == "MB" || e == "mB" || e == "Mb")
	{
		cout << "Text weight = " << (a * b * c * d) / 8 / 1024 / 1024 << " megabytes.";
	}
	if (e == "gb" || e == "GB" || e == "gB" || e == "Gb")
	{
		cout << "Text weight = " << (a * b * c * d) / 8 / 1024 / 1024 / 1024 << " gigabytes.";
	}
	return 0;
}