#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");

	
	int arr[] = {12,1243,214,214,124,14214,124,124,124,6543};
	

	for ( int i = 0 ; i < sizeof(arr)/sizeof(int); i++)
	{
		cout << arr[i] << endl;

	}
}