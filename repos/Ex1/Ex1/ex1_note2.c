#include <stdio.h>

int sum1(int n1,int n2)
{

for (; n2 > n1; n2++)

{
	int sum = 0;
	sum += n2;
	int res;
	res = sum;
}
	return
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	// a,b �Է¹ޱ�

	if (a > b) { // sum1()�� ������
		printf("%d���� %d������ ���� %d�Դϴ�.\n", b, a, sum1(a, b));
		// sum(a,b,c)�Լ����� ��ȯ�� ���� ���������� ����ϱ�.
	}
	else if (a < b) { // sum2()�� ������
		printf("%d���� %d������ ���� %d�Դϴ�.\n", a, b, sum2(a, b));
		// sum(a,b,c)�Լ����� ��ȯ�� ���� ���������� ����ϱ�.
	}
	else // ( a = b ) , sum3()�� ������
		printf("%d���� %d������ ���� %d�Դϴ�.\n", a, b, sum3(a, b));
	// sum(a,b,c)�Լ����� ��ȯ�� ���� ���������� ����ϱ�.
}