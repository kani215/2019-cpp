/*
<for 문>

for(int i=1;i<10; i++) {
}의 형태

ex. 무한 루프
#include <cstdio>
void main() {
	int i, num1, num2;
	printf("첫 번째 숫자를 입력하세요 :");
	scanf_s("%d", &num1);
	printf("두 숫자 ㄱ");
	scanf_s("%d", &num2);

	i = 1;
	for (;;) {
		if (i % num1 == 0 && i % num2 == 0)
			break;
		i += 1;
	}
	printf("최소공 =%d\n", i);

}

ex. 

*/
