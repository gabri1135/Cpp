#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    do {
        cout << "Inserire n: ";
        cin >> n;
    } while (n <= 0);

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cout << "Inserire il " << i + 1 << " valore: ";
        cin >> v[i];
        for (int k = 0; k < i; k++) {
            if (v[k] == v[i]) {
                cout << "Valore già presente";
                return 0;
            }
        }
    }

    cout << "Non ci sono valori presenti più volte";

    return 0;
}