
// ConsoleApplication8.cpp�: d�finit le point d'entr�e pour l'application console.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

const int N = 10;

int main()
{
	int a[N], i, j, min, imin, tmp;

	for (i = 0; i<N; i++)
	{
		cout << "Veuillez taper l'entier numero " << i << " : "; cin >> a[i];
	}

	for (i = 0; i<N - 1; i++)
	{
		imin = i; min = a[i];
		for (j = i + 1; j < N; j++) { if (a[j] < min) { min = a[j]; imin = j; } }

		tmp = a[imin]; a[imin] = a[i]; a[i] = tmp;
	}

	cout << "VOICI LE TABLEAU TRIE :" << endl;
	for (i = 0; i<N; i++) cout << "a[" << i << "]=" << a[i] << endl;

	system("pause");
	return 0;
}

