/*
< �迭�� ������ >
< 1���� �迭�� ����Ű�� ������>
< 2���� �迭�� ����Ű�� ������>
<������ �迭>
<���� ������>


< �迭�� ������ >

> ������ �迭�� �� ���ҵ��� �޸𸮿� �����ؼ� ����Ǿ��ִٴ� ��
�迭�� ����Ʈ ȣ��

#include <stdio.h>
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i;
	parr = &arr[0];

	for (i = 0; i < 10; i++) {
		printf("arr[%d] �� �ּҰ� : %p", i, &arr[i]);
		printf("(parr + %d) �� �� : %p ", i, (parr + i));

		if (&arr[i] == (parr + i)) {
			// ���� (parr + i) �� ���������� arr[i] �� ����Ų�ٸ�
		printf(" --> ��ġ \n");
		}
		else {
		printf("--> ����ġ\n");
		}
	}
	return 0;

< 1���� �迭�� ����Ű�� ������>

int arr[3] = {1,2,3} �迭 ���� ��
int *parr
parr = arr 
�� �迭�� ù �޸� �ּҸ� ����Ų��.

- ���� 1

#include <stdio.h>
int main() {
  int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

  int* parr = arr;
  int sum = 0;

  while (parr - arr <= 9) {
	sum += (*parr);
	parr++;
  }

  printf("�� ���� ���� ��� : %d \n", sum / 10);
  return 0;
}


<�������� ������ >
: int **p; �����͸� ����Ű�� ������
#include <stdio.h>
int main() {
  int a;
  int *pa;
  int **ppa;

  pa = &a;
  ppa = &pa;

  a = 3;

  printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
  printf("&a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
  printf("&pa : %p // ppa : %p \n", &pa, ppa);

  return 0;
} ������ ���� 


< 2���� �迭�� ����Ű�� ������>

<������ �迭>

int (*parr)[3] = &arr; arr�迭 �ּҰ��� �����ϴ� ũ�� 3���� ������
int *parr[3] int*�� ���Ҹ� 3�� ���� �迭 ����

(*parr)[1] = parr[1]  �� ����
<���� ������>
*/




