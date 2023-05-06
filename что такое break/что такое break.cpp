//Ключевое слово break, заканчивает цикл, даже если по условию действие может выполняться.




#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");

	cout << "Начало цикла" << endl;
	/*
	for (int i = 0; ; i++)
	{
		cout << "Переменная i = " << i << endl;
		if (i == 5)
		{
			break;
		}
	}
	*/
	int i = 0;
	while (true)
	{
		cout << "Переменная i = " << i << endl;
		i++;
		if (i == 6)
		{
			break;
		}

	}

	cout << "конец цикла\n";
}