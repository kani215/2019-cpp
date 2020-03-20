#define _CRT_SECURE_NO_WARNINGs
// malloc 함수의 이해
// 메모리 동적 할당
// 2차원 메모리 동적 할당

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int SizeOfArray;
	int* arr;
	printf("만들고 싶은 배열의 원소의 수 : ");
	scanf("%d", &SizeOfArray);

	arr = (int*)malloc(sizeof(int) * SizeOfArray);

	free(arr);
}

// new는 메모리 할당 T* pointer = new T; 포인터에만
// 사용 가능

