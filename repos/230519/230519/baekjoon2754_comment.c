#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	// 2���� ���ڷ� �̷���� ������ �������� �����Ͽ� ����϶�.
	
	// 1. ù��° �� �Է¹ޱ�
	// c1 ���� ���� :: A, B, C, D, F

	/*
	
	char c1;
	scanf("%c", &c1);

	// c1�� ���� F��� ��� ��� ���,
	// �ƴ϶�� �Է� �� ������ �̾ ����

	if (c1 == 'F') {printf("0.0\n");}
	else {
		char c2;
		scanf("%c", &c2);

		double score = 0;
		if (c1 == 'A') {score = 4;}
		else if (c1 == 'B') {score = 3;}
		else if (c1 == 'C') {score = 2;}
		else {score = 1;}

		if (c2 == '+') {score += 0.3;}
		else if (c2 == '-') {score -= 0.3;}

		printf("%.1f", score);
	}

	*/

	/// ���� if���� switch������ ����

	char c1;
	scanf("%c", &c1);

	// case1 - F - 0.0
	// case2 D,C,B,A
	// 
	// case3 +,-,0
	// 
	// 


	switch(c1)
		case 1: // F

}