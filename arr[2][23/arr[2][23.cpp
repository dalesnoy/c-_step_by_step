﻿/*В двумерном массиве обращение идет по строке потом по стоблцу a[строка]a[стобец]*/

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(0, "");
	const int row = 2;
	const int col = 4;

	int arr[row][col]
	{
		/*первая стркоа*/{1, 2, 3, 4 /*4 элемента т.к. у нас
		изначально указано 4 элемента */}, /*вторая строка
		*/{684, 654, 57, 47}
	};

	/*В двумерном массиве обращение идет по строке потом по стоблцу a[строка]a[стобец]*/
	cout << arr[1][3] << endl;
}