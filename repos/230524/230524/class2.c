#include <stdio.h>

// do while������ ����
int main(void)
{
	int total = 0, num = 0;
	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);	// 0�� �Է¾ȵǸ� ���ѷ���, break�� ���� ��� ��
	printf("�հ�: %d \n", total);
	return 0;
}

	// for������ �����ϱ�
int main()
	{
	int number, sum = 0;
	for (number = -1; number != 0;) {
		printf("���� �Է� (0 : �� ���) : ");
		scanf("%d", &number);
		sum += number;
	}
	printf("%d %d", sum, number);
}
// ���������� ����





// �ּ��� 1ȸ �̻� ����Ǿ�� �ϴ� �ݺ�����
// do-while������ �ۼ��ϴ°� ����.