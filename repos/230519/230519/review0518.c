#include <stdio.h>
// <stdio.h> ���̺귯���� �ڵ忡 �����Ѵ�.
// printf(), scanf()�� <stdio.h>�� ����ִ� ��ɹ�

int main()
{
	// ���������� :: %d(int), %lld(long long int), 
	//				%f(float), %lf(double), %c(char)
	// => printf(), scanf() ���� ���

	// scanf("����������1 ����������2 ...", &����1, &����2, ...);
	//		=> scanf()���� "" �κп��� ���������ڿ� ���鸸 ���
	// & :: �ּҿ�����	-> "������"<������ �н��� �ñ�>
	int n = 1;
	printf("%d\n", n);
	printf("%d\n", &n);

	// * ������
	// ���������(5) :: +, -, *, /(��), %(������)
	// ���Կ�����(1) :: = ("�����Ѵ�")

	// ���� ������ :: Ư�� ������ �ڷ����� "�ӽ÷�" ���� ��ȯ
	int a = 3;
	double result = 10 / (double)a;
	printf("%.3f\n", result);
	result = 10 / a; // int�� ����� ���¸� ����
	printf("%.3f\n", result);














	// ���� ��

	// %.3f :: �Ҽ��� �Ʒ��� �ڸ��� = %f ���� �����ʿ� �ִ� ��.
	// �� �ڸ����� ���߱� ���� �ڵ����� ���� �ݿø��Ͽ� ���.

	const double dNum = 1234.56789;

	printf("%.0f\n", dNum);
	printf("%.1f\n", dNum);
	printf("%.2f\n", dNum);
	printf("%.3f\n", dNum);
	printf("%.4f\n", dNum);

	// %f ���� ���ʿ� �ִ� ���� ��ü �ڸ����� ����

	const double eNum = 1234.56789;

	printf("%9.0f\n", eNum);
	printf("%9.1f\n", eNum);
	printf("%9.2f\n", eNum);
	printf("%9.3f\n", eNum);
	printf("%9.4f\n", eNum);

}
