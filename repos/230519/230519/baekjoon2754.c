#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1.������ ���� 2���� �̿��Ͽ� �Է¹ޱ�.
// 2. ����� �����ϴ� ���� 0���� �ʱ�ȭ�Ͽ�
//	  2���� �Է°��� ���� ������ �ش�.

// A0 �������� +�� A0 �������� +0.3, -�� -0.3

/*
A+: 4.3, A0: 4.0, A-: 3.7

B+: 3.3, B0: 3.0, B-: 2.7

C+: 2.3, C0: 2.0, C-: 1.7

D+: 1.3, D0: 1.0, D-: 0.7

F: 0.0
*/


int main()
{

	char c1, c2;
	scanf("%c%c", &c1, &c2);

	double result = 0;
	
		if (c1 == 'A') {
			result = 4 ;
		}
		else if (c1 == 'B') {
			result = 3 ;
		}
		else if (c1 == 'C') {
			result = 2 ;
		}
		else if (c1 == 'D') {
			result = 1 ;
		}
		else if (c1 == 'F') {
			result = 0;
		}

		if (c2 == '+') {
			result += 0.3 ;
		}
		else if (c2 == '-') {
			result -= 0.3 ;
		}
		
	printf("%.1f", result);
}






//int main()
//{
//	char score, etc;
//
//	scanf("%c %c", &score, &etc);
//
//
//	if (score == 'A') 
//		{
//			if (etc == '+')
//			{
//			printf("4.3");
//			}
//
//		}
//
//
//}
// 
//}
// ���� ���ٰ� ����