#include <stdio.h>




struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
};

typedef struct GameInfomation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO;

int main_struct(void)
{

	// [���� ���]
	// �̸� : ���� ����
	// �߸� ����: 2017��
	// ���� : 50��
	// ���ۻ� : ���� ȸ��

	char* name = "��������";
	int year = 2017;
	int price = 50;
	char* company = "����ȸ��";

	// �Ǵٸ� ���� ���]
	// �̸� : �ʵ� ����
	// �߸� ����: 2017��
	// ���� : 100��
	// ���ۻ� : �ʵ� ȸ��

	char* name2 = "��������";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "�ʵ�ȸ��";

	/// ����ü ���

	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	/// ����ü ���



	printf("%s\n", gameInfo1.name);
	printf("%d\n", gameInfo1.year);
	printf("%d\n", gameInfo1.price);
	printf("%s\n", gameInfo1.company);

	printf("\n");
	printf("\n");

	/// ����ü�� �迭ó�� �ʱ�ȭ

	struct GameInfo gameInfo2 = {"�ʵ�����", 2017, 100, "�ʵ�ȸ��"};

	printf("%s\n", gameInfo2.name);
	printf("%d\n", gameInfo2.year);
	printf("%d\n", gameInfo2.price);
	printf("%s\n", gameInfo2.company);

	printf("\n");
	printf("\n");


	// ����ü �迭
	struct GameInfo gameArray[2] = {
		{"��������", 2017, 50, "����ȸ��"},
		{"�ʵ�����", 2017, 100, "�ʵ�ȸ��"}
	};

	// ����ü ������
	struct GameInfo * gamePtr; // �̼Ǹ�
	gamePtr = &gameInfo1;

	printf("%s\n", gamePtr->name);
	printf("%d\n", gamePtr->year);
	printf("%d\n", gamePtr->price);
	printf("%s\n", gamePtr->company);


	printf("\n");
	printf("\n");
	// ������ü 
	gameInfo1.friendGame = &gameInfo2;

	printf("%s\n", gameInfo1.friendGame->name);
	printf("%d\n", gameInfo1.friendGame->year);
	printf("%d\n", gameInfo1.friendGame->price);
	printf("%s\n", gameInfo1.friendGame->company);


	// typedef
	// �ڷ����� ���� ����
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3; 

	�Ǽ� �Ǽ����� = 3.23f;
	printf("%d, %.2f", ��������, �Ǽ�����);


	typedef struct GameInfo ��������;

	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2015;

	GAME_INFO game2;
	game2.name = "���� ����";
	game2.year = 2017;

	return 0;

}