#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(0, "");

	srand(time(0));			//задает ЭТУ САМУЮ определенную ТОЧКУ, каждый раз
							//менять аргумент не будем == нужна функция time

	/*int a = rand() % 10 + 5;		//генерирует ПСЕВДОСЛУЧАЙНЫЕ числа, берет их из определенной ТОЧКИ
	cout << a << endl;			//%10 означает что рандомные цифры будут до 10
								//+5 означает что диапазон будет от 5 до 15 (к 0 прибавляется 5 к 10 тоже)
 */

	int const SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}
