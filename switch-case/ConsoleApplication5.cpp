#include <iostream>

using namespace std;



void main() 
{
	setlocale(0, "");
	
	int a, b;

	
	cout << "Введите 2 числа\n";

	cin >> a>>b;


	char c;

	cout << "Введите действие\n";
	
	cin >> c;
	
	switch (c)
	{
	case '+':
		cout << "Сумма равна  "<< a + b ; 
		break;

	case '-':
		cout << "Разность равна - " << a - b;
		break;
	
	case '*':
		cout << "Произведение равно - " << a * b;
		break;

	case '/':
		cout << "Частное равно - " << a / b;
		break;

	case '%':
		cout << "Среднее арифметическое - " << (a + b) / 2;
		break;
	}


}