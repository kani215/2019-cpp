// �迭_ ������ ����� ������

#include <stdio.h>
int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	// int ������ Ÿ���� arr�ε� �� ũ�Ⱑ 10�̴�. = {}���ȣ�� 
	//���� ���� ���� 
	printf("Array 3 ��° ���� : %d \n", arr[2]);
	return 0;
}

//�Է� �ޱ�

#include <stdio.h>
int main() {
	int arr[10];
	for (int i = 1; i < 10; i++) {
		scanf_s("%d", &arr[i]);
	}
}

