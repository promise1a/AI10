
#include <stdio.h>
int main() {

	// 1. �޴� �ȳ�
	printf("1) ���� 800��\n");
	printf("2) ���̴� 1,200��\n");
	printf("3) �ݶ�	1,300��\n");
	printf("4) ���̽�Ƽ 1,500��\n");
	printf("5) ī��� 1,600��\n\n");

	printf("9) ���� �� �߰�\n");
	printf("0) ���α׷� ����\n");
	printf("���Ͻô� ��ư�� �Է����ּ���.\n");


	// ��ư 9 �� ������ �� ���Թ����� �Ѿ,
	// ��ư 0 �� ������ ���� ��Ʈ�� �Բ� ����.
	// �� �̿��� ��ư�� ������ ��� ���� ��ٸ�.(�ƹ��ϵ�X)

	int button;
	scanf("%d", &button);
	//printf("%d���� �����ϼ̽��ϴ�.\n", button);

	int rest = 0;

	int money = 0;

	/*int m =+ money*/

	while (1)
	{
		switch (button)
		{
		case 9: // ���� �� �߰� ��ư ������ ��, �ݾ� �Է� ���
			/*button = 9;*/
			printf("���� �־��ּ���.\n");
			scanf("%d", &money); // ���� �ݾ׼� �Է¹���
			printf("���� ���Ե� �ݾ��� %d���Դϴ�.\n\n", money);

			printf("1) ���� 800��\n");
			printf("2) ���̴� 1,200��\n");
			printf("3) �ݶ�	1,300��\n");
			printf("4) ���̽�Ƽ 1,500��\n");
			printf("5) ī��� 1,600��\n\n");

			printf("9) ���� �� �߰�\n");
			printf("0) ���α׷� ����\n");
			printf("���Ͻô� ��ư�� �Է����ּ���.\n");
			scanf("%d", &button);

			switch (button)
			{
			case 1: // button =1
				rest = money - 800; // �Ž�����
				if (rest >= 0)
				{
					printf("������ �����ϼ̽��ϴ�!\n");
					printf("���Ű� �Ϸ�Ǿ����ϴ�.\n");
					printf("���� �ݾ��� %d���Դϴ�.\n", rest);
				}

				else {
					printf("����� �����մϴ�.\n");
					printf("�ݾ��� �� �������ּ���.\n");
				}
				break;
			case 2: // button =2
				rest = money - 1200; // �Ž�����
				if (rest >= 0)
				{
					printf("���̴ٸ� �����ϼ̽��ϴ�!\n");
					printf("���Ű� �Ϸ�Ǿ����ϴ�.\n");
					printf("���� �ݾ��� %d���Դϴ�.\n", rest);
				}
				else {
					printf("����� �����մϴ�.\n");
					printf("�ݾ��� �� �������ּ���.\n");
				}
				break;
			case 3: // button =3
				rest = money - 1300; // �Ž�����
				if (rest >= 0)
				{
					printf("�ݶ� �����ϼ̽��ϴ�!\n");
					printf("���Ű� �Ϸ�Ǿ����ϴ�.\n");
					printf("���� �ݾ��� %d���Դϴ�.\n", rest);
				}
				else {
					printf("����� �����մϴ�.\n");
					printf("�ݾ��� �� �������ּ���.\n");
				}
				break;
			case 4:
				rest = money - 1500; // �Ž�����
				if (rest >= 0)
				{
					printf("���̽�Ƽ�� �����ϼ̽��ϴ�!\n");
					printf("���Ű� �Ϸ�Ǿ����ϴ�.\n");
					printf("���� �ݾ��� %d���Դϴ�.\n", rest);
				}
				else
				{
					printf("����� �����մϴ�.\n");
					printf("�ݾ��� �� �������ּ���.\n");
					break;
				}
			case 5:
				rest = money - 1600; // �Ž�����
				if (rest >= 0)
				{
					printf("ī��󶼸� �����ϼ̽��ϴ�!\n");
					printf("���Ű� �Ϸ�Ǿ����ϴ�.\n");
					printf("���� �ݾ��� %d���Դϴ�.\n", rest);
				}
				else
				{
					printf("����� �����մϴ�.\n");
					printf("�ݾ��� �� �������ּ���.\n");
				}
				break;
			}
			printf("\n1) ���� 800��\n");
			printf("2) ���̴� 1,200��\n");
			printf("3) �ݶ�	1,300��\n");
			printf("4) ���̽�Ƽ 1,500��\n");
			printf("5) ī��� 1,600��\n\n");

			printf("9) ���� �� �߰�\n");
			printf("0) ���α׷� ����\n");
			printf("���Ͻô� ��ư�� �Է����ּ���.\n");
			scanf("%d", &button);
			{continue; }
			// ������� ������µ�
			// ���Ŀ��� �޴� ����
			
			
			return; 0;
		case 0: // ���α׷� ���� ��ư ������ ��, ���� ��Ʈ ���
			printf("�����մϴ�. �Ž������� %d���Դϴ�.\n", rest);
			return; 0;
		default: // �� ��,
			scanf("%d", &button);
			{continue; }
		}
	}


	

}
//switch (button)
//{
//case 1: // button =1
//	rest = money - 800; // �Ž�����
//	if (rest >= 0)
//	{
//		printf("������ �����ϼ̽��ϴ�.\n");
//		printf("�Ž������� %d���Դϴ�.\n", rest);
//	}
//
//	else {
//		printf("����� �����մϴ�.\n");
//		printf("�ݾ��� �� �������ּ���.\n");
//	}
//	break;
//case 2: // button =2
//	rest = money - 1200; // �Ž�����
//	if (rest >= 0)
//	{
//		printf("���̴ٸ� �����ϼ̽��ϴ�.\n");
//		printf("�Ž������� %d���Դϴ�.\n", rest);
//	}
//	else {
//		printf("����� �����մϴ�.\n");
//		printf("�ݾ��� �� �������ּ���.\n");
//	}
//	break;
//case 3: // button =3
//	rest = money - 1300; // �Ž�����
//	if (rest >= 0)
//	{
//		printf("�ݶ� �����ϼ̽��ϴ�.\n");
//		printf("�Ž������� %d���Դϴ�.\n", rest);
//	}
//	else {
//		printf("����� �����մϴ�.\n");
//		printf("�ݾ��� �� �������ּ���.\n");
//	}
//	break;
//case 4:
//	rest = money - 1500; // �Ž�����
//	if (rest >= 0)
//	{
//		printf("���̽�Ƽ�� �����ϼ̽��ϴ�.\n");
//		printf("�Ž������� %d���Դϴ�.\n", rest);
//	}
//	else
//	{
//		printf("����� �����մϴ�.\n");
//		printf("�ݾ��� �� �������ּ���.\n");
//		break;
//	}
//case 5:
//	rest = money - 1600; // �Ž�����
//	if (rest >= 0)
//	{
//		printf("ī��󶼸� �����ϼ̽��ϴ�.\n");
//		printf("�Ž������� %d���Դϴ�.\n", rest);
//	}
//	else
//	{
//		printf("����� �����մϴ�.\n");
//		printf("�ݾ��� �� �������ּ���.\n");
//	}
//	break;
//}