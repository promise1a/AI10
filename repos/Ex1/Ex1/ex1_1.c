//1.[�Լ� ����]
//a���� b������ ���� ���ϵ�, c�� ��� �κ��� �����ϰ� ���� ���� ��.
// main()���� ���� a�� b�� c�� ���� �Է¹ް�,
// �� �Լ� ������ ������� main���� ��ȯ�ϰԲ� �ϱ�
//(���ϰڴٸ� �׳� main�� ���� ¥����)

#include <stdio.h>


int sum1(n1,n2) // a>b , n1>n2
{
	for(;n2>n1;n2++)
	{
		int sum;
		sum+= n2;

	}





	//int num;
	//int res = 0;
	//while (n1 = n2)
	//{
	//	num = n2;
	//	res += num;
	//	n2++;
	//}
	//return res;
}


int sum2(n1,n2) // a<b , n1<n2
{
	int num;
	int res = 0;
	while (n1 = n2)
	{
		num = n1;
		res += num;
		n1++;
	}

	return res;
}


int sum3(n1,n2) // a=b, n1=n2
{
		return 0;
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