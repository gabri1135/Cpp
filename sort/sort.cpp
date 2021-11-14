#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define n 2
#define tot 8

int main() {
	int k = 0;
	vector<int> a(n), v(tot+n);

	srand(time(NULL));
	for (int i = 0; i < n; i++)
		v[i] = 0;
	for (int i = n; i < tot+n; i++)
		v[i] = rand() % 10000;	
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		cout << "Inserire il " << i + 1 << " numero: ";
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	cout << "Vettore di partenza: ";
	for (int i = 0; i < tot + n; i++)
		cout << v[i] << ", ";
	cout << endl;

	for (int i = n; i < tot+n; i++)
	{
		if (k<n&&a[k] < v[i])
		{
			v[i - n + k] = a[k];
			k++;
			i--;
		}
		else
			v[i - n + k] = v[i];
	}

	for (int i = k; i < n; i++)
	{
		v[tot + i] = a[i];
	}

	cout << "Vettore finale: ";
	for (int i = 0; i < tot + n; i++)
		cout << v[i] << ", ";
	cout << endl;
}