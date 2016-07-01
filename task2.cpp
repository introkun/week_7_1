#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int cellSize, quantityСell, line, symbol, countSymbol;
	cout << "размер клетки от 1 до 9 = ";
	cin >> cellSize;
	cout << "количество клеток от 2 до 8 = ";
	cin >> quantityСell;
	countSymbol = cellSize * quantityСell;
	if (cellSize < 1 ||
		cellSize > 9 ||
		quantityСell < 2 ||
		quantityСell > 8)
	{
		cout << "вы ввели не верные данные, проверьте ввод!!";
	}
	for (line = 0; line < countSymbol; line++)
	{
		for (symbol = 0; symbol < countSymbol; symbol++)
		{
			if ((line / cellSize) % 2 == 0 &&
				(symbol / cellSize) % 2 == 0)
			{
				cout << '*';
			}
			else if ((line / cellSize) % 2 == 1 &&
				(symbol / cellSize) % 2 == 1)
			{
				cout << '*';
			}
			else
			{
				cout << '-';
			}
		}
		cout << endl;
	}
}