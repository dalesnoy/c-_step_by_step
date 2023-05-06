#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");

	for (int i = 0; i < 10; i++)
	{
		cout << "i = " << i << endl;
	}

	int razn = 100;

	int m = 0;

	for (; m < razn; m++)
	{
		razn -= m;
		cout << "Razn = " << razn<< endl;

	}

	/* Область видимости - если бы мы не объявили переменную заранее, 
	она бы существовала только внутри данного цикла*/
}





/*Составляющие for(1 - целочисленная переменная, 2 - проверка условия, 3 инкремент)*/