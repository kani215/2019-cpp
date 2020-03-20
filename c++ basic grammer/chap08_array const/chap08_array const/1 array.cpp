// 배열_ 변수의 사용을 줄이자

#include <stdio.h>
int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	// int 데이터 타입의 arr인데 그 크기가 10이다. = {}대괄호로 
	//값을 직접 대입 
	printf("Array 3 번째 원소 : %d \n", arr[2]);
	return 0;
}

//입력 받기

#include <stdio.h>
int main() {
	int arr[10];
	for (int i = 1; i < 10; i++) {
		scanf_s("%d", &arr[i]);
	}
}

