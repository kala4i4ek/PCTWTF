#include <iostream>
#include <string>
using namespace std;
string e;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, b, c, d;
	cout << "Введите кол-во страниц: ";
	cin >> a;
	cout << "Введите кол-во строк: ";
	cin >> b;
	cout << "Введите кол-во символов: ";
	cin >> c;
	cout << "Введите исчисление одного символа в битах: ";
	cin >> d;
	cout << "Введите в какой единице хотите увидить результат(B,KB,MB,GB): ";
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
		cout << "Вес текста = " << a * b * c * d / 8 << " байт.";
	}
	if (e == "kb" || e == "KB" || e == "kB" || e == "Kb")
	{
		cout << "Вес текста = " << (a * b * c * d) / 8 / 1024 << " килобайт.";
	}
	if (e == "mb" || e == "MB" || e == "mB" || e == "Mb")
	{
		cout << "Вес текста = " << (a * b * c * d) / 8 / 1024 / 1024 << " мегабайт.";
	}
	if (e == "gb" || e == "GB" || e == "gB" || e == "Gb")
	{
		cout << "Вес текста = " << (a * b * c * d) / 8 / 1024 / 1024 / 1024 << " гигабайт.";
	}
	return 0;
}