#include <stdio.h>

void main() {
	int pie = 3.14;
	double pie2 = 3.14;
	// printf(pie);로는 문자열만 출력이 가능한가 보다.
	printf("0.2f\n", pie);
	printf("%0.2f", pie);

	


	int a, b;
	int sum;
	printf("첫 번째 숫자를 입력하세요:");
	scanf_s("%d", &a);
	//형식, a에다가 넣어라
	printf("두 번째 숫자 입력");
	scanf_s("%d", &b);
	sum = a + b;
	printf("입력한 두 수의 합은 %d입니다.\n",sum );
}

