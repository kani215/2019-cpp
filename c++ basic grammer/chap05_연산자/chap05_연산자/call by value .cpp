#include <cstdio>

void plusref(int *b);
	//b라는 번지에서 값을 가져옴
void main() {
	int i;
	i = 5;
	plusref(&i);
	// i라는 복잡한 번지를 대입
	printf("결과 =%d\n", i);

}

void plusref(int *b) {
	*b = *b + 1;
}