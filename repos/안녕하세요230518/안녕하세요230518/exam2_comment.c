#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//* �̸��� ���� �������� �Է¹޾�, �̵��� ����� ����ϼ���.

	// 1. ���� ���� :: name(char), kor, math, eng(int)

	char name;
	int kor, math, eng;

	// 2. ������ �� �Է¹ޱ� :: scanf()
	// scanf()�� ""�ȿ���, ���������ڿ� ���鸸 �� �� �ִ�.
	scanf("%c", &name);
	scanf("%d %d %d", &kor, &math, &eng);

	// 3. ����� ���� + ������ ����
	// ���� ����ȯ :: Ư�� ������ �ڷ����� ������ ����

	double result = (kor + math + eng) / (double)3;
	// or 
	// double result = (double)(kor + math + eng) / 3;

	// 3 �� �Ǽ��� �ٲٴ� ���
	// - (double)3
	// - 3.0

	// 4. ��Ĵ�� ���(����� �Ҽ����� ���Ե� �Ǽ� ������ ���)
	/*�ݰ����ϴ�.[Y]��
	  �̹� ������ �����[���]�Դϴ�.*/

	printf("�ݰ����ϴ�. %c��\n", name);
	printf("�̹� ������ ����� %f���Դϴ�.", result);

	// 10/3 = 3 (����/���� = ��)
	// 10/3.0 = 3.3333 (����/�Ǽ�, �Ǽ�/���� = ��� ���)
	// 10%3 = 1 (����/���� = ������)

}