#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//* �̸��� ���� �������� �Է¹޾�, �̵��� ����� ����ϼ���.
//�Ʒ� ����� �����Ͻñ� �ٶ��ϴ�.
//
//�ݰ����ϴ�.[Y]��
//�̹� ������ �����[���]�Դϴ�.
//
//- �Է¹��� ����::name(char), kor(int), math(int), eng(int)
//- ����� �Ҽ����� ���Ե� �Ǽ� ������ ���
//
//* ����غ� ��
//
//
// ������ �������� �̿��Ͽ� ��� �Ǽ��� ����� ����ұ� ?

int main() 
{
	printf("�̸��� �Է����ּ���.\n");
	char name;
	scanf("%c", &name);
	printf("�ݰ����ϴ�. %c��\n\n", name);
	
	printf("���� ������ �Է����ּ���.\n");
	int kor;
	scanf("%d", &kor);
	
	printf("���� ������ �Է����ּ���.\n");
	int math;
	scanf("%d", &math);
	
	printf("���� ������ �Է����ּ���.\n");
	int eng;
	scanf("%d", &eng);
	
	
	double avg = (kor + math + eng) / 3.0;	
	// ����غ��� :: /3 �����ϸ� ����, /3.0 �����ϸ� �Ǽ�
	printf("�̹� ������ ����� %f�Դϴ�.\n", avg);

}