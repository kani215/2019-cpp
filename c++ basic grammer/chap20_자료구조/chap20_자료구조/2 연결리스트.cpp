//���Ḯ��Ʈ

/*
1. ������ ����
- �޸� ���� ����

2. �迭 ��� ����Ʈ
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

�迭������ ���� ������ ������ ó�����־���Ѵ�
Ư�� ��ġ�� ��� ���� �Ұ�
�޸𸮿� �̸� �Ҵ�, ���ϴ� �� ���� ���� �Ұ�

*/

//2. ���Ḯ��Ʈ 
// ���� �ֵ� �� ������ ���� �ּҰ��� next�� ����
// ���� ������ �߰��� next ����ǥ�� Ž�� �����ϴ� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// ������ ������ �����Ҵ��� ���� 

typedef struct { //typedef + ����ü +����ü������
	//����ü ȣ��� struct ��������
	int data;
	struct Node *next;
} Node;

// node ����ü �������� ����
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



