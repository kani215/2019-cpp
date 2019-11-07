#include <iostream>
using namespace std;

int main() {
	short H, M;
	cin >> H >> M;
	
	if (M > 45)  {
		cout << H << " " << M - 45;
	}
	else if (M < 45 && H == 0) {
		cout << 23 << " " << M + 15 ;
	}
	else {
		cout << H - 1 <<" "<< M + 15 ;
	}
	return 0;
}