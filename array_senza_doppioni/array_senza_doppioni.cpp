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
    }
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < i; k++) {
            if (v[k] == v[i]) {
                cout << "0";
                return 0;
            }
        }
    }
    cout << "1";

    return 0;
}