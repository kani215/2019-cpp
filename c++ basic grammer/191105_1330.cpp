#include <iostream>
using namespace std;
void pri(int &a, int &b) {
	if (a > b){
		cout << '>';
	}
	else if (a == b){
		cout << "==";
	}
	else {
		cout << '<';
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	pri(a, b);
}