#include <iostream>

using namespace std;

int main()
{
    int V[10], R[10], last0;

    for (int i = 0; i < 10; i++)
    {
        do
        {
            cout << "inserire il " << i + 1 << " numero: ";
            cin >> V[i];
        } while (V[i] < 0 || V[i] > 1023);
    }

    for (int i = 0; i < 10; i++)
    {
        last0 = 0;

        cout << V[i] << ":\t";
        for (int k = 0; k < 10; k++)
        {
            R[k] = V[i] % 2;
            V[i] /= 2;
            if (V[i] == 0)
                last0++;
        }

        for (int k = 10-last0; k >= 0; k--)
            cout << R[k];
        cout << endl;
    }

    return 0;
}