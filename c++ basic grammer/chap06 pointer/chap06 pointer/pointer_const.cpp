/* 상수포인터, 포인터 덧셈, 배열과 포인터

< 포인터의 사용이유 >

- 이쯤되면 떠오르는 생각이, 
int a =3 을 쓰면 되지 왜 int *p =3 하고 *p=3을 왜하는지 궁금하다

< 상수 포인터 >
const int a = 3;
" 이 데이터의 내용은 절대로 바뀔 수 없다.' 라는 의미
a는 어떤 변동이 불가능 a =4  시 에러
#include <stdio.h>
int main() {
  int a;
  int b;
  const int* pa = &a;

  *pa = 3;  // 올바르지 않은 문장
  pa = &b;  // 올바른 문장
  return 0;
}
포인터 자체를 상수 제약시 주소값을 이용한 값변화는 허용하면서
*pa 값 자체의 변화는 제약한다. 

#include <stdio.h>
int main() {
  int a;
  int b;
  const int* const pa = &a;

  *pa = 3;  // 올바르지 않은 문장
  pa = &b;  // 올바르지 않은 문장

  return 0;
}
이건 전부 제약한 것


< 포인터 연산 >

#include <stdio.h>
int main() {
  int a;
  int* pa;
  pa = &a;

  printf("pa 의 값 : %p \n", pa);
  printf("(pa + 1) 의 값 : %p \n", pa + 1);

  return 0;
}

포인터 주소값 연산 +1 실행시 4칸씩 차이가 난다 이는 int형이
4바이트마다 값을 메모리에 기록하기 때문
char은 1, double은 8바이트 차이가 난다.

- 단원을 보면, 꽤나 놀라운데 : 
선언 = 주소값을 넣어주세요 식으로
순서를 뒤밖이는 서술이 먹힌다는 것이다.

int * a 와 int *b 가 모두 &c를 참조한다면 이 포인터의 변수형은
int 로 동일해야한다.


*/