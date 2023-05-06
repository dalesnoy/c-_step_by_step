#include <iostream>

using namespace std;


	/*
	функции

	возвращаемое_значение имя_функции(параметр)
	{
		блок_повторяющегося_кода
	}
	
	*/


int sum(int a, int b) 
{

	return a+b;
}

void main() 
{
	int q = 15;
	int w = 12;
	cout << sum(q, w);
}