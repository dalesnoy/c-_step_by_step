#include <iostream>

using namespace std;

void main()
{

	setlocale(0, "");
	
	int symbol_count;
	char symbol;
	int lineT;
	int index = 0;


	cout << "Введите кол-во символов в линиии\n";
	cin >> symbol_count;

	cout << "Введите символ\n";
	cin >> symbol;


	cout << "Выберите тип линии\n";
	cout << "1. Вертикальная\n2. Горизонтальная\n";

	cin >> lineT;
	
	switch (lineT)
	{
	case 1:
		while (index < symbol_count)
		{
			index++;
			cout << symbol << endl;
		}
		break;

	case 2:
		while (index < symbol_count)
		{
			index++;
			cout << symbol;
		}
	break;

	default:
		cout << "Введено неверное значение";
	break;
	}


}