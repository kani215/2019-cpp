#include <stdio.h>

void main() {
	int pie = 3.14;
	double pie2 = 3.14;
	// printf(pie);�δ� ���ڿ��� ����� �����Ѱ� ����.
	printf("0.2f\n", pie);
	printf("%0.2f", pie);

	


	int a, b;
	int sum;
	printf("ù ��° ���ڸ� �Է��ϼ���:");
	scanf_s("%d", &a);
	//����, a���ٰ� �־��
	printf("�� ��° ���� �Է�");
	scanf_s("%d", &b);
	sum = a + b;
	printf("�Է��� �� ���� ���� %d�Դϴ�.\n",sum );
}

