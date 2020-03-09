/*
<포인터를 이해하기 앞서>
인수 선언시 데이터 타입에 따라 메모리를 차지하게 됩니다

int a =123;  4바이트 메모리를 차지함
이때 이 메모리 위치가 0x15289로 해보자

a=10 이라는 명령은 위의 123 공간을 10으로 바꾸라는 명령이된다.

포인터 : (변수타입) * 인수 , 
명확하게 변수 해당 값의 주소값을 저장하는 변수. 

포인터연산자 : & 해당 인수의 주소를 반환
<1단계>

#include <stdio.h>
int main() {
  int *p;
  int a;

  p = &a;

  printf("포인터 p 에 들어 있는 값 : %p \n", p);
  printf("int 변수 a 가 저장된 주소 : %p \n", &a);

  return 0;
}
<2단계>

#include <stdio.h>
int main() {
  int *p;
  int a;

  p = &a;
  a = 2;

  printf("a 의 값 : %d \n", a);
  printf("*p 의 값 : %d \n", *p);

  return 0;

이는 *p의 쓰임을 알아야한다. int*는 그 자체로 주소값 반환 
변수 타입이라면 *p는 그 주소값에 저장된 수를 의미한다.
a는 2를 대입했기에 2이며, &a 아니니까
p는 주소값이겠지만 *p는 p의 저장된 값이니니 2가 나온다

<3단계>
#include <stdio.h>
int main() {
  int *p;
  int a;

  p = &a;
  *p = 3;

  printf("a 의 값 : %d \n", a);
  printf("*p 의 값 : %d \n", *p);

  return 0;
}


*/