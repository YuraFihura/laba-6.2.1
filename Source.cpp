#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void Input(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a = [ " << i << " ];" << endl;
		int t;
		cin >> t;
		a[i] = t;
	}
	cout << endl;
}

void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Count(int* a, const int n)
{
	cout << "a = [ ";
	for (int i = 0; i < n + 1; i++)
	{
		int imin = i;
		for (int k = i + 1; k < n; k++)
			if (a[k] > a[imin])
				imin = k;

		int t = a[i];
		a[i] = a[imin];
		a[imin] = t;
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << ", ";
	cout << "];" << endl;
	return n;
}

int main()
{
	srand(time(0));

	int n;
	cout << "n = "; cin >> n;

	int* a = new int[n];

	Input(a, n);
	Print(a, n);
	Count(a, n);

	return 0;
}
