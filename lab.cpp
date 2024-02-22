#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout << "Enter Number:";
	cin >> rows;

	for (int i = 0; i < 5; i++) 
	{
		for (int j = 5; j > i; j--) 
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++) 
		{
			cout << i;
		}
		for (int j = 0; j < i; j++) 
		{
			cout << i;
		}
		cout << endl;
	}
}