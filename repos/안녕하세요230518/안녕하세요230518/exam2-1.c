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
	
	char name;
	int kor;
	int math;
	int eng;
	scanf("%c %d %d %d", &name, &kor, &math, &eng);
	double avg = (kor + math + eng) / 3.0;


	//char name;
	//scanf("%c", &name);
	//int kor;
	//scanf("%d", &kor);
	//int math;
	//scanf("%d", &math);
	//int eng;
	//scanf("%d", &eng);
	//double avg = (kor + math + eng) / 3.0;
	printf("�ݰ����ϴ�. %c��\n�̹� ������ ����� %f�Դϴ�.\n", name, avg);
	// ����غ���2 :: /3 �����ϸ� ����, /3.0 �����ϸ� �Ǽ�

}