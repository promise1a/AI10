#include <stdio.h>


int main()
{
	int n1, n2;
	int num;
	int res = 0;

	scanf("%d %d", &n1, &n2);
	//n1, n2 ����

	if (n1 > n2) // 10 7
	{
		while (n1 < n2) // 10,7 10,8 10,9 10,10
			// 
		{
			num = n2;
			printf("n2�� %d�Դϴ�.\n", n2);
			res += num;
			printf("������� ���� %d�Դϴ�.\n", res);
			n2++;
		}
		printf("%d���� %d���� �� ���� %d�Դϴ�.", &n1, &n2, &res);
	}

	/*else if (n1 < n2)
	{
		while (n1 = n2)
		{
			num = n1;
			printf("n2�� %d�Դϴ�.\n", n1);
			res += num;
			printf("������� ���� %d�Դϴ�.\n", res);
			n1++;
		}
		printf("%d���� %d���� �� ���� %d�Դϴ�.", &n1, &n2, &res);
	}*/
	else; // n1 = n2
	return 0;
}

