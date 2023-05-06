#include <iostream>


using namespace std;

/* Сумма нечетнхы чисел из некоторого диапазона - задание*/

void main() {

	setlocale(0, "");

	int sum = 0;

	int rangeBegin, rangeEnd;

	cout << "Введите начало диапазона\n";
	cin >> rangeBegin;

	cout << "Введите конец диапазона\n";
	cin >> rangeEnd;

	do
	{
		if (rangeBegin % 2 != 0)
		{
			sum += rangeBegin;
		}
		rangeBegin++;

	} while (rangeBegin < rangeEnd);

	cout << "Сумма нечетных чисел из заданного диапазона - \n" << sum;
}


// Описывается сначала условие цикла и только потом цикл.
/* Даже если действие не соотвествует условию, оно будет выполнено один раз, т.к.
действие идет перед условием*/