#include <stdio.h>
#include <time.h>

int main_condition(void)
{
	// if (����) {...} else {...}
	
	// if (����) {...} else if (����) {...} else {...}

	//int age = 25;

	//if (age >= 8 && age <= 13)
	//{
	//	printf("�ʵ��л� �Դϴ�.\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("���л� �Դϴ�\n");

	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("����л� �Դϴ�\n");
	//}
	//else
	//{
	//	printf("û�ҳ��� �ƴѰ�����");
	//}

	//break / continue
	//1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6)
	//	{
	//		printf("������ �л��� ���� ������\n");
	//		break;
	//	}
	//	printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	//}

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;

			}
			printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);

		}
	}*/

	//&& ||

	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 12;
	
	if (a == b || c == d)
	{
		printf("a�� b Ȥ�� c�� d�� ���� �����ϴ�.\n");;
	}
	else
	{
		printf("���� ���� �ٸ��׿�");
	*/

//int num = rand() % 3; //0~2
//
//printf("���� �ʱ�ȭ ����..\n");
//for (int i = 0; i < 10; i++)
//{
//	printf("%d\n", rand() % 10);
//}
//
//srand(time(NULL)); // ���� �ʱ�ȭ
//printf("\n\n ���� �ʱ�ȭ ����..\n");
//for (int i = 0; i < 10; i++)
//{
//	printf("%d\n", rand() % 10);
//}

	// ���� 0 ���� 1 �� 2
	srand(time(NULL));
	int i = rand() % 3; // 0~2 ��ȯ

	//if (i == 0)
	//{
	//	printf("����\n");
	//}
	//else if (i == 1)
	//{
	//	printf("����\n");
	//}
	//else
	//{
	//	printf("��\n");
	//}
		
	/*switch (i)
	{
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	defualt:printf("�����\n"); break;
	}*/

	/*int age = 15;

	switch (age)
	{
	case 8: 
	case 9: 
	case 10:
	case 11:
	case 12:
	case 13: printf("�ʵ��л� �Դϴ�.\n"); break;
	case 14:
	case 15:
	case 16: printf("���л� �Դϴ�.\n"); break;
	case 17:
	case 18:
	case 19:  printf("����л� �Դϴ�.\n"); break;
	default: printf("�л��� �ƴѰ�����");

	}*/
	
	// project Up & Down

	srand(time(NULL));
	int num = rand() % 100 + 1;

	printf("���� : %d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (chance > 0)
	{
		printf("���� ��ȸ %d�� \n", chance--);
		printf("���ڸ� ���������� (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("Down �� \n\n");
		}
		else if (answer < num)
		{
			printf("Up �� \n\n");

		}
		else if (answer == num)
		{
			printf("�����Դϴ�!! \n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾�� \n\n");
		}
		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿� �ƽ��׿�\n");
		}
	}

	

	return 0;
}