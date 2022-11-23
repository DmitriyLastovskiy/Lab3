#include <iostream>
using namespace std;

int main()
{
	const int n = 5;
	int a[n] = { 1,2,3,4,5 };
	int b[n] = {};

	for (int i = 0; i < n; i++)
	{
		b[i] = i;
		cout << b[i] << ",";
	}
	cout << endl;

	int c[n] = {};
	for (int j = 0; j < n; j++)
	{
		c[j] = a[j] * b[j];
		cout << c[j] << ",";
	}
	cout << endl;

	cout << "First element:" << c[0] << endl;
	cout << "Address of the first element:" << c + 0 << endl;
	cout << "Last element:" << c[4] << endl;
	cout << "Address of the last element: " << c + 4 << endl;
}
