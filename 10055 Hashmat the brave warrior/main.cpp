#include <iostream>
#include<stdlib.h>
using namespace std;

int main () {
	long a,b;

	while (cin>> a >> b || !cin.eof() )
    {
            cout << abs(a-b) << endl;

	}

	return 0;
}
