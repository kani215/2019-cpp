#include <iostream>
using namespace std;
int main() {
	unsigned short year;
	cin >> year;

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				cout << "1";
			}
			else {
				cout << "0";
			}
		}
		else {
			cout << "1";
		}
	}
	else {
		cout << "0";
	}

	return 0;
}

/*
#include <cstdio>

int main() {

	int n; scanf("%d", &n);
	if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0))
		printf("1");
	else printf("0");

	return 0;
}
*/