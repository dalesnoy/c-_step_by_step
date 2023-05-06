#include <iostream>
#include <ctime>


using namespace std;

void main()
{
	srand(time(0));

	const int SIZE = 10;


	bool flag = 0;
	int arr[SIZE];

	for (int i = 0; i < SIZE;)
	{
		
		flag = 0;
		int new_rand = rand()%20;
		
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == new_rand)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
		{
			arr[i] = new_rand;
			i++;
		}
	
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

}