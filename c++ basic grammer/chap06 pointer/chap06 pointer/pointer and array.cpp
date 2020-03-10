/*
< 배열과 포인터 >
< 1차원 배열을 가리키는 포인터>
< 2차원 배열을 가리키는 포인터>
<포인터 배열>
<더블 포인터>


< 배열과 포인터 >

> 요점은 배열의 각 원소들은 메모리에 연속해서 저장되어있다는 것
배열의 포인트 호출

#include <stdio.h>
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i;
	parr = &arr[0];

	for (i = 0; i < 10; i++) {
		printf("arr[%d] 의 주소값 : %p", i, &arr[i]);
		printf("(parr + %d) 의 값 : %p ", i, (parr + i));

		if (&arr[i] == (parr + i)) {
			// 만일 (parr + i) 가 성공적으로 arr[i] 를 가리킨다면
		printf(" --> 일치 \n");
		}
		else {
		printf("--> 불일치\n");
		}
	}
	return 0;

< 1차원 배열을 가리키는 포인터>

int arr[3] = {1,2,3} 배열 선언 후
int *parr
parr = arr 
시 배열의 첫 메모리 주소를 가르킨다.

- 예제 1

#include <stdio.h>
int main() {
  int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

  int* parr = arr;
  int sum = 0;

  while (parr - arr <= 9) {
	sum += (*parr);
	parr++;
  }

  printf("내 시험 점수 평균 : %d \n", sum / 10);
  return 0;
}


<포인터의 포인터 >
: int **p; 포인터를 가르키는 포인터
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
} 원리는 동일 


< 2차원 배열을 가리키는 포인터>

<포인터 배열>

int (*parr)[3] = &arr; arr배열 주소값을 참조하는 크기 3개의 포인터
int *parr[3] int*의 원소를 3개 지닌 배열 선언

(*parr)[1] = parr[1]  과 동일
<더블 포인터>
*/




