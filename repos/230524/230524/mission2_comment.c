#include <stdio.h>

int main() {

	int num1 = 0;
	int num2 = 0;
	double result = 0.0;
	char inp;
	int	res = 1;
	int i;
	do
	{
		printf("ù��° ���� �Է� : ");
		scanf_s("%d", &num1);
		printf("�ι�° ���� �Է� : ");
		scanf_s("%d", &num2);

		res = num1 + num2;
		printf("���� ���� %d\n", res);
		res = num1 - num2;
		printf("������ %d\n", res);
		res = num1 * num2;
		printf("���� ���� %d\n", res);
		result = (double)num1 / num2;
		printf


		("���� ���� %f\n", result);
		res = 1;

		if (num1 % 2 == 0)
		{
			for (i = 0; i < 3; i++)
				res *= num1;
			printf("������ ���� %d\n", res);
			res = 1;
		}
		if (num2 % 2 != 0)
		{
			for (i = 0; i < 2; i++)
				res *= num2;

			printf("���� ���� %d\n", res);
		}

		printf("�����Ͻðڽ��ϱ�? ('q' to quit or contiue to any key): ");
		scanf_s(" %c", &inp, 1);

	} while (inp != 'q');

	return 0;
}

	/*
	{
	int n, num = 0;
	//j�� ¦�� , i�� Ȧ�� , n ������ ��
	int total = 1;
	while (1) {
		printf("���� �Է�\n");
		scanf_s(" %d", &num);
		printf("%d", num);
		if (num == 0)
		{
			printf("���α׷��� �����մϴ�.");
			printf("%d", num);
			break;
		}

		for (n = 1, total = 1; n < 11; n++) {
			total = total * num;
			printf("%d�� %d������ %d\n", num, n, total);
		}
	}
}

*/


