#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 2���� ���ڷ� �̷���� ������
	// �������� �����Ͽ� ����϶�. (switch��)

	// ù��° ���� �Է�
	char c1;
	scanf("%c", &c1);

	if (c1 == 'F') {
		printf("0.0\n");
	}
	else {	// c1 :: A, B, C, D �� �ϳ�
		char c2;
		scanf("%c", &c2);

		double score = 0;
		switch (c1) {
		case 'A':
			score = 4;
			break;
		case 'B':
			score = 3;
			break;
		case 'C':
			score = 2;
			break;
		default: score = 1; // c1�� D�� ���,
		}

		switch (c2) {
		case '+': score += 0.3; break;
		case '-': score -= 0.3; break;
		}

		printf("%.1f", score);
	}

}