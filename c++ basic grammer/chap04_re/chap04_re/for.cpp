/*
<for ��>

for(int i=1;i<10; i++) {
}�� ����

ex. ���� ����
#include <cstdio>
void main() {
	int i, num1, num2;
	printf("ù ��° ���ڸ� �Է��ϼ��� :");
	scanf_s("%d", &num1);
	printf("�� ���� ��");
	scanf_s("%d", &num2);

	i = 1;
	for (;;) {
		if (i % num1 == 0 && i % num2 == 0)
			break;
		i += 1;
	}
	printf("�ּҰ� =%d\n", i);

}

ex. 

*/
