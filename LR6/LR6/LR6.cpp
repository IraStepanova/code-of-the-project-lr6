#include "pch.h"
#include "windows.h"
#include "stdlib.h"
#include "time.h"
#include <iostream>

using namespace std;

int main()
{
	int m;
	int b[100];
	int multiply = 1;
	int min = abs(b[0]);

	cout << "Enter m from 2 to 100: ";
	cin >> m;

	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		b[i] = rand();
		cout << "Element " << i + 1 << " is " << b[i] << endl;
	}

	for (int i = 1; i < m; i += 2)
	{
		multiply *= b[i];
	}

	cout << endl;
	cout << "Multiplication = " << multiply << endl << endl;

    cout << "Array:" << endl;

	for (int i = 0; i < m; i++) {
		cout << "b[" << i << "] = " << b[i] << endl;
	}


	system("pause");
	return 0;
}