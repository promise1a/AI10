#include <stdio.h>

int main() {
	int dan, num, i = 0;
	do

	{
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &dan);
		if (dan == 0)
			break;
		for (i = 1; i < 10; i++)
		{
			num = dan * i;
			printf("%d X %d = %d \n", dan, i, num);
			// �� ���� ��� ���� ����
		}
	} while (dan != 0);
}

