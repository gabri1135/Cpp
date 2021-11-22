#include <iostream>

using namespace std;

int main() {
	int tot = 0, prec=0, n=0, i=0;
	do
	{	
		
		cout << "Inserire un numero: ";
		cin >> n;

		if (i >= 2) {
			if (n == prec)
			break;
				tot -= prec;
				prec = tot;
		}
		else if(i==0)
			prec = n;

		tot += n;
		i++;
	} while (i < 1||tot!=10);

}
