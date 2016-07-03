#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int number, count, zero, sum;

	// Необходимо было вывести меню для пользователя с возможностью выбора операции 1-4
	cout << "определяем количество цифр и нулей в этом числе в этом числе, посчитаем их сумму и среднее арифметическое" "\n"
		"введите число ";
	cin >> number;

	for (count = 0, zero = 0, sum = 0; number > 0; number /= 10, count++)
	{
		int divisionRemainder = number % 10;
		if (divisionRemainder == 0)
		{
			zero++;
		}
		sum += divisionRemainder;
	}
	cout << "в этом числе в этом числе = " << count << " чисел и " << zero << " нулей" << endl
		<< "сумма цыфр этого числа = " << sum << " и среднее арифметическое = " << sum*1.0 / count << endl;
}
