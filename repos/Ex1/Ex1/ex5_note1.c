//5.[�Լ� ����]
//a���� b���� ���ϴ� �Լ��� ����� 1x2x......xb = ��� ����ϰ� ��ȯ�� �ִ� �Լ� �����
//(����)
//1x2x3x4x5[�Լ����� ���]
//total = 120[main���� ���]

#include <stdio.h>

int sum1(n1,n2) //a<b�϶�
{
	int n1, n2;
	int res = 1;
	while (n1 > n2)
	{
		res *= n2; // n2 * n2+1 * n2+2 * ... * n1-1 * n1
		printf(res, n2);
		n2++;
	}

}

int sum2() // a>b�϶�
{
	int n1, n2;
	while (n1 < n2)

		n1++;

}

int sum3() // a=b
{
	int n1, n2;
	return n1 * n2;

}



int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	// a, b �Է¹���

	if (a > b) // b*(b+1)*...*(a-1)*a // sum1() �����Ϸ�
		// b++;
	{
		printf("%d %d", sum1(a, b));
	}
	else if (a < b) // a*(a+1)*...*(b-1)*b // sum2() �����Ϸ�
		// a++;
	{
		printf("�̱���2");
	}
	else;//(a=b), sum3() �����Ϸ�
	{
		printf("�̱���3");
	}


}