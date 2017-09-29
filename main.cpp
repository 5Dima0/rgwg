#include <iostream> 
#include <stdio.h>
using namespace std;

int main()

{
	string s, k;
	int i, p;
	cin >> s;
	p = s.length();
	for (i = p - 1; i >= 0; --i) {
		k = k + s[i];
	}
	if (s == k) {
		cout << '1';
	}
	else {
		cout << '0';
	}
	system("pause");

	return 0;
}
