/*
<함수 >

type 함수명(인수) {

} 의 구성이다.
type : 함수가 리턴하는 값의 데이터형이 된다. 작업 결과를 의미.
리턴이 없다면 void함수로 제시한다.



< 헤더 함수 >

헤더 를 제시하면 그 안 함수들을 사용가능

getch 함수 사용시 알수 있기도 함.v 

#include <stdio.h>
int MAx(int num1, int num2) {
	if (num1 > num2) {
		return num1;

	}
	else {
		return num2;
	}
}
int main() {

}
#include <cstdio>

int plusone(int a);

void main() {
	int i, j;
	i = 5;
	j = plusone(i);
	printf("i=%d,결과 =%d\n", i, j);

}

int plusone(int a) {
	a = a + 1;
	return a;
}
*/



