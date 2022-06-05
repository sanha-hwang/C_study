#include <stdio.h>

int main_array(void)
{
	//// �迭
	//int subway_1 = 30; // ����ö 1ȣ���� 30���� Ÿ�� �ִ�.
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	//printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	//printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_3);

	// �������� �������Բ�, ���ÿ� ����

	//int subway_array[3]; // [0], [1], [2]
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("����ö %dȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", i+1,subway_array[i]);

	//}

	// �� ���� ���

	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // ���� �ʱ�ȭ���� �ʰ� ���� �Ѵٸ� �����Ⱚ�� ��
	/*for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	// �迭 ũ��� �׻� ����� ����
	
	//int arr[10] = { 1, 2 }; // ������ ������ ���� �迭��, 3���� �����ʹ� �ڵ����� '0'���� �ʱ�ȭ
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	// int arr[] = {1, 2} //��� �ϸ� �ڵ����� arr[2]�� �����ϰ� �ʱ�ȭ�� �Ͱ� ����
	
	/*float arry_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
		{
			printf("%.2f\n", arry_f[i]);
		}*/

	// ���� vs ���ڿ�

	/*char c = 'A';
	printf("%c\n", c);*/


	// ���ڿ� �������� '��'�� �ǹ��ϴ� NULL ���� "\0'�� ���ԵǾ����
	//char str[7] = "coding"; // [c], [o], [d],[i],[n],[g], [\0]
	//printf("%s\n", str);

	//char str[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));


	/*for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}*/

	/*char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));*/

	// ���� 1���� : 1byte
	// �ѱ� 2���� : 2byte

	//char c_array[7] = { 'c', 'o', 'd', 'i', 'n','g', '\0' };
	//printf("%s\n", c_array);

	//char c_array[10] = { 'c', 'o', 'd', 'i', 'n','g'};
	//printf("%s\n", c_array);
	//for (int i = 0; i < sizeof(c_array); i++)
	//{
	//	printf("%d\n", c_array[i]); // ASCII �ڵ� ������ ��� (null ���� 0���� �Էµ�)
	//}

	/*char name[256];
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	// ���� :  ASCII �ڵ� ? ANSI(�̱� ǥ����ȸ)���� ������ ǥ�� �ڵ� ü��
	// 7bit, �� 128ro zhem (0~127
	// a : 97
	// A : 65
	// 0 :48
/*
	printf("%c\n", 'a');
	printf("%d\n", 'a');
	printf("%c\n", 'b');
	printf("%d\n", 'b');
	printf("%c\n", '\0');
	printf("%d\n", '\0');

	printf("%c\n", '0');
	printf("%d\n", '0')*/;

	// ����2 : 0~127 ������ �ƽ�Ű�ڱ� �������� �ش��ϴ� ���� Ȯ��
	for (int i = 0; i < 128; i++)
	{
		printf("�ƽ�Ű�ڵ� ���� %d : %c\n", i, i);
	}

	return 0;
}