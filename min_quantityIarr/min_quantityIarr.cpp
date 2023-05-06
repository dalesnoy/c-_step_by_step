#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");

	int n;

	int k;


	cout << "Укажите размер массива" << endl;

	cin >> n;

	cout << "Введите " << n << " чисел\n";

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	k = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= k)
		{
			k = arr[i];
		}
	}

	cout << "минимальный элемент массива - " << k << endl;

	/*for (int i = 0; i < n; i++)
	{
		cout << i << " элемент массива - ";
		cout << arr[i] << endl;
	}
	*/
}