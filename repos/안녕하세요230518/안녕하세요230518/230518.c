#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	// �Է¹� :: scanf()
	// scanf("����������1 ����������2 ...", &����1, &����2, ...);
	// & :: �ּҿ�����
	// &num :: "���� num�� ��ġ�� �ּ�" ��ȯ

	int num;	// int�� ���� num ����
	scanf("%d", &num);	// num �� �Է¹ޱ�
		// %d���� �Է¹��� ����
		// ����ڰ� Enter�� ���� �� num���� ����
		// < printf �� �޸� �ݴ� ����>
	printf("%d", num); // �Է¹��� num�� ����ϱ�



}