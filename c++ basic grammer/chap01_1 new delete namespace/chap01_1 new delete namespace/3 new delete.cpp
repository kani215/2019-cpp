// ���� �޸� �Ҵ�
/*
�� �ڲ� �Ҵ� ��Ű�� �ù߳���

*** ������ ��� ���� ***

1) ������ ������

������ �Լ� ���� ������ ��Ȳ���� �ٸ� �Լ����� �����Ҷ�
�� �������� �����ϴµ��� ������ ���δ�.

2) ���ӵ� �޸� ����
�迭 ����ü Ŭ���� = ���ӵȸ޸𸮸� �Ҵ����

�ϳ��� �������� �������� ���� �ڷ������� �̷�����⿡
������ ��Ģ�� ���� �����͸� �б� ���� ���� �ּҰ���
����ġ�� �����͸� ���

3) heap ������ Ȱ�� - �����Ҵ��� ������
�� ������ �ּҸ� ����ؼ� �ٸ� �Լ����� ������ �� �ְ�

*/
c���� �迭�� �̸� ũ�⸦ ���صξ���Ѵ�.
�� ��� ���α׷������� �ӵ��� ������ �翬�ϰ� �߻��ȴ�.
��� �ؾ��ϴ°�...?


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** arbc) {
	int SizeOfArray;
	int* arr;
	printf("����� ���� �迭�� ������ �� : ");
	scanf("%d", &SizeOfArray);

	arr = (int*)malloc(sizeof(int) * SizeOfArray);
	// int arr[SizeOfArray] �� ������ �۾��� �� ũ���� �迭 ����

	free(arr);
	// �޸� ������ �ٽ� ��ǻ�Ϳ� ��ȯ free ���ϸ� ������� �ʴ�
	// �޸𸮰� �������� �ڸ� ����

	return 0;
}
�޸��� ���� ���, ���� ������ �� ������ �ƴ϶� malloc�� ��
���� �̿��Ѵ�. �� ���� ����ڰ� �����Ӱ� �Ҵ�, �����ϴ� ����

�̿� ����ϰ� c++������ heap�� Ȱ���մϴ�. malloc�� free��
��� �����ϳ�. new�� delete�� ���ؼ� �˾ƺ��ô�.


// new �� delete�� ���

#include <iostream>

int main() {
	int* p = new int;
	// new int intũ���� ������ �Ҵ��ؼ� �� �ּҰ��� p�� ����;

	*p = 10;
	// �Ҵ�� ������ 10�� ���� 
	std:cout << *p << "\n";
	delete p;
	// ���� ���� ������ �����Ӱ�

}


/* new �� �迭 �Ҵ��ϱ� */

#include <iostream>

int main() {
	int arr_size;
	std::cout << "array size : ";
	std::cin >> arr_size;
	int* list = new int[arr_size];

	// Type* pointername = new Type[size];
	// �迭
	for (int i = 0; i < arr_size; i++) {
		std::cin >> list[i];
	}
	for (int i = 0; i < arr_size; i++) {
		std::cout << i << "th element of list : " << list[i] << std::endl;
	}
	delete[] list;
	// �迭������ new[] delete[]�� ¦�������ٴ� �� ����
	return 0;
}
