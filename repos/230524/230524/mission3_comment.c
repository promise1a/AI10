#include <stdio.h>

/*int main() {

	int num1 = 0;
	int num2 = 0;
	double result = 0.0;
	char inp ;
	int	res = 1;
	int i;
	do
	{
		printf("ù��° ���� �Է� : ");
		scanf_s("%d", &num1);
		printf("ù��° ���� �Է� : ");
		scanf_s("%d", &num2);

		res = num1 + num2;
		printf("���� ���� %d\n", res);
		res = num1 - num2;
		printf("������ %d\n", res);
		res = num1 * num2;
		printf("���� ���� %d\n", res);
		result = (double)num1 / num2;
		printf("���� ���� %f\n", result);
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


}*/
int main() {
	int dan = 0;
	int num = 0;
	int count = 0; // do while�� �ʱ�� :: count�� ���ư��ϱ�
	char inp;
	do
	{
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &dan);
		if (dan <= 9)
		{
			for (num = 1; num < 10; num++)
				printf("%d X %d = %d\n", dan, num, dan * num);
			count++; // �ݺ����� �󸶳� �۵��ߴ��� ī��Ʈ, ������
		}
		else
			printf("�ٽ� �Է����ּ���!!\n"); // ī��Ʈ�� �������� ����

		printf("�����Ͻðڽ��ϱ�? ");
		scanf_s(" %c", &inp, 1);
		if (inp == 'q')
			break;
	} while (count < 11); // ���ǽ�
	// 0���� ��� 11 round, <=10 ���� <11�� ������ ����
	// = ������ �� �� �� �ϴ°ŷ� �ۿ�
	// 0���� �����ϸ� <,>�� ��� // while �������� <,>�� ��� <=,>= ����
	// 
}




