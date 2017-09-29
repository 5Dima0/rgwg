#include <iostream> 
#include <stdio.h>
#include <string.h>

using namespace std;

short code(char a)
{
    short b;
    b = (short)a;
    return b;
    }

int main()

{
	string x, y, z;
	int i, p;
	getline(cin,x);
	p = x.length();
	for (i = p - 1; i >= 0; --i) {
	    if (code(x[i])>64) {
		    if (code(x[i])<91) {y+=x[i];}
		}
		if (code(x[i])>96) {
		    if (code(x[i])<123) {y+=x[i] - 32;}
		}
		if (code(x[i])>47) {
		    if (code(x[i])<58) {y+=x[i];}
		}
	}
	p=y.length();
	for (i = p - 1; i >= 0; i=i-1) {
		z +=y[i];
	}
	if (z == y) {
		cout << '1';
	}
	else {
		cout << '0';
	}
	system("pause");

	return 0;
}
