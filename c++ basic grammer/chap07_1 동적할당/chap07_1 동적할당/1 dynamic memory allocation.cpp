#define _CRT_SECURE_NO_WARNINGs
// malloc �Լ��� ����
// �޸� ���� �Ҵ�
// 2���� �޸� ���� �Ҵ�

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int SizeOfArray;
	int* arr;
	printf("����� ���� �迭�� ������ �� : ");
	scanf("%d", &SizeOfArray);

	arr = (int*)malloc(sizeof(int) * SizeOfArray);

	free(arr);
}

// new�� �޸� �Ҵ� T* pointer = new T; �����Ϳ���
// ��� ����

