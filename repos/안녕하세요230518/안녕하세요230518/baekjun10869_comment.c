
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// ���� 10869 ��Ģ����

	// 1. a�� b �Է¹ޱ� :: scanf()
	// �׽�Ʈ ������ ���� :: 1~10,000
	int a, b;
	scanf("%d %d", &a, &b);

	// 2. ��� ��� ( +, -, *, /, % )
	// 2-1) ��� ���
	/*printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);*/

	// 2-2) ������ ����� �����Ͽ� ���
	int result = a + b;
	printf("%d\n", result);
	result = a - b;
	printf("%d\n", result);
	result = a * b;
	printf("%d\n", result);
	result = a / b;
	printf("%d\n", result);
	result = a % b;
	printf("%d\n", result);


}