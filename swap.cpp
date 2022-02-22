#include<iostream>
using namespace std;

void swap(int *x ,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int x, y;

	cout << "Enter the numbers :" << endl;
	cin >> x;
	cin >> y;
	cout << "Before swap, x=" << x << ",y=" << y << endl;
	swap(&x, &y);
	cout << "After swap, x=" << x << ", y=" << y << endl;
}
