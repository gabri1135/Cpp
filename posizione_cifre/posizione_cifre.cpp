#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i = 0;

    do
    {
        cout << "Inserire n: ";
        cin >> n;
        if (n >= pow(10, 9))
            cout << "Il numero deve essere minore di 10^9, altrimenti non rispetterà mai la proprietà" << endl;

    } while (n <= 0 || n >= pow(10, 9));

    do
    {
        if (n % 10 <= i)
        {
            cout << "Non rispetta la proprietà";
            return 0;
        }
        i++;
        n /= 10;
    } while (n >= 10);

    cout << "Rispetta la proprietà";
    return 0;
}
