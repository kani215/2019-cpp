//연결리스트

/*
1. 기존의 불편
- 메모리 공간 낭비

2. 배열 기반 리스트
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define INF 10000;

int arr[INF];
int count = 0;

void addBack(int data) {
	arr[count] = data;
	count++;
}

void addFirst(int data) {
	for (int i = count; i >= 1; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = data;
	count++;
}
void show() {
	for (int i = 0; i < count; i) {
		printf("%d", arr[i]);
	}
}
int main(void) {
	addBack(5);
	addBack(7);
	system("pause");

	return 0;
}

배열에서는 값의 삭제도 덮어쓰기로 처리해주어야한다
특정 위치로 즉발 접근 불가
메모리에 미리 할당, 원하는 곳 삽입 삭제 불가

*/

//2. 연결리스트 
// 값을 넣되 그 마지막 값의 주소값을 next에 저장
// 추후 데이터 추가시 next 꼬리표로 탐색 유도하는 방법

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 포인터 변수의 동적할당을 위함 

typedef struct { //typedef + 구조체 +구조체별명선언
	//구조체 호출시 struct 생략가능
	int data;
	struct Node *next;
} Node;

// node 구조체 전역변수 설정
Node* head;
int main(void) {
	head = (Node*)malloc(sizeof(Node));
	Node *node1 = (Node*)malloc(sizeof(Node));
	node1->data = 1;
	Node *node2 = (Node*)malloc(sizeof(Node));
	node2->data = 2;
	head->next = node1;
	head->next = NULL;

}



