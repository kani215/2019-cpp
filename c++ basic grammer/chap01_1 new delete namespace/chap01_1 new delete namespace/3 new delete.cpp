// 동적 메모리 할당
/*
왜 자꾸 할당 시키냐 시발놈들아

*** 포인터 사용 이유 ***

1) 변수의 지역성

변수를 함수 내에 생성한 상황에서 다른 함수에서 참조할때
이 변수값을 수정하는데에 포인터 쓰인다.

2) 연속된 메모리 참조
배열 구조체 클래스 = 연속된메모리를 할당받음

하나의 변수들의 집합으로 위의 자료형들은 이루어지기에
규정된 규칙에 따라 데이터를 읽기 위해 직접 주소값을
가르치는 포인터를 사용

3) heap 영역의 활용 - 동적할당의 사용목적
힙 영역에 주소를 기억해서 다른 함수에서 참조할 수 있게

*/
c에서 배열은 미리 크기를 정해두어야한다.
이 경우 프로그램에서는 속도의 문제가 당연하게 발생된다.
어떻게 해야하는가...?


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** arbc) {
	int SizeOfArray;
	int* arr;
	printf("만들고 싶은 배열의 원소의 수 : ");
	scanf("%d", &SizeOfArray);

	arr = (int*)malloc(sizeof(int) * SizeOfArray);
	// int arr[SizeOfArray] 와 동일한 작업을 한 크기의 배열 생성

	free(arr);
	// 메모리 영역을 다시 컴퓨터에 반환 free 안하면 사용하지 않는
	// 메모리가 슬데없이 자리 차지

	return 0;
}
메모리의 힙을 사용, 스택 데이터 등 영역이 아니라 malloc은 이
힙을 이용한다. 이 힙은 사용자가 자유롭게 할당, 삭제하는 영역

이와 비슷하게 c++에서는 heap을 활용합니다. malloc와 free는
사용 가능하나. new와 delete에 대해서 알아봅시다.


// new 와 delete의 사용

#include <iostream>

int main() {
	int* p = new int;
	// new int int크기의 공간을 할당해서 그 주소값을 p에 저장;

	*p = 10;
	// 할당된 공간에 10은 들어가고 
	std:cout << *p << "\n";
	delete p;
	// 남은 공간 해제로 여유롭게

}


/* new 로 배열 할당하기 */

#include <iostream>

int main() {
	int arr_size;
	std::cout << "array size : ";
	std::cin >> arr_size;
	int* list = new int[arr_size];

	// Type* pointername = new Type[size];
	// 배열
	for (int i = 0; i < arr_size; i++) {
		std::cin >> list[i];
	}
	for (int i = 0; i < arr_size; i++) {
		std::cout << i << "th element of list : " << list[i] << std::endl;
	}
	delete[] list;
	// 배열에서는 new[] delete[]가 짝지어진다는 점 참고
	return 0;
}
