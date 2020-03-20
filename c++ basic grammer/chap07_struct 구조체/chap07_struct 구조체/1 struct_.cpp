/*
구조체, struct

객체를 표현하기 위해 하나 이상의 변수가 필요한
프로그래밍 사례가 많이 있다
*/
#include <iostream>
struct MyBirthYear {
	int myBirthMon;
	int myBirthDay;
	int myHeightInches;
	int myWeight;
}

int main() {
	MyBirthYear kimik;

	//구조체 myBirthYear 선언 kimik은 이 변수타입의 변수이다.

	MyBirthYear joe; 
	joe.myBirthMon = 14;  
	joe.myBirthDay = 32; 
	joe.myWeight = 24.15; 
}

허나 발전으로 인해서 구조체의 값을 초기화 해줄 수 있다.



