/*
<����� ����>
c�� c++
�������� ��ü����
���ڴ� ���������� ���α׷����ϴ� ��
���ڴ� class ������ ������ ���α׷����ϴ°�
��� �������� �����̶�� ����

�������̵� oop���� �Լ��� �ߺ� �����ϴٴ� ��
�̷� ������ c++������ using namespace�� �� ��ü�� ��� �Ҽ��� �������� 
�����־���Ѵ�.  �ٷ��� std�� ��κ��� ��ü�� �����Ѵ�.

c++�� ���̽�
��ũ��Ʈ ���, �����Ϸ� ���

������ �ٷ� �����ϴ� ���̽��� ��������� �ݿ�������
�����Ϸ� ���� ������ �Ǳ� �������� �״��

*/
/* <��¿���>
#include <stdio.h>
// stdio.h��� ��� ������ �о�ζ�� ��
void main() {
// void ���� ��ȯ���� ���� , ������ �Լ��� main()���� �̷������.
	printf("korea\n");
}
*/

/*
<������Ʈ>
c++�� �������� �ǹ��� �۾� ����
sin�� �̷� ������Ʈ���� ���� �ǹ��� ���α׷�
*/
#include <stdio.h>

void main() {
	int i, j;
	for (i = 1;i <= 15; i++) {
		for (j = 1;j <=i ;j++) {
			printf("*");
		}
		printf("\n");
	}
}
