#include <cstdio>

void plusref(int *b);
	//b��� �������� ���� ������
void main() {
	int i;
	i = 5;
	plusref(&i);
	// i��� ������ ������ ����
	printf("��� =%d\n", i);

}

void plusref(int *b) {
	*b = *b + 1;
}