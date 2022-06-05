#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// 5������ �����̰� �ִ�.
// �ƹ�Ű�� ������ �������� �����̸� �̵�
// 5���� ��� �� ������ �ؼ� ������ Ű��� �Ǵ� ����!
// �ߺ��߻� ����

// ������
// �̸� ���� ���� Ű��� ���̵�

typedef struct {
	char* name; // �̸�
	int age; // ����
	char* character; // ����
	int level;

} CAT;

// ������� ������ ������
int collection[5] = { 0, 0, 0, 0, 0 };

// ��ü ������ ����Ʈ
CAT cats[5];
void printCat(int selected);
void initCats();
int checkCollection();

int main_pro(void) {

	srand(time(NULL));

	initCats();

	while (1)
	{
		printf("�αٵα�~! ��� �������� ���簡 �ɱ��?\n �ƹ�Ű�� ������ Ȯ���ϼ���!");
		getchar();

		int selected = rand() % 5; // 0~4 ������ ���� ��ȯ
		printCat(selected); // ���� ������ ���� ���

		// ������ �̱� ó��
		collection[selected] = 1; // ������ �̱� ó��

		int collectAll = checkCollection();
		if (collectAll == 1)
		{
			break;
		}


	}
	return 0;

}

void initCats() {

	cats[0].name = "������";
	cats[0].age = 5;
	cats[0].character = "�¼�";
	cats[0].level = 1;

	cats[1].name = "�Ϳ��";
	cats[1].age = 5;
	cats[1].character = "��ī��";
	cats[1].level = 2;

	cats[2].name = "������";
	cats[2].age = 7;
	cats[2].character = "�� �Ḹ ��";
	cats[2].level = 3;

	cats[3].name = "�����";
	cats[3].age = 2;
	cats[3].character = "�ò�����";
	cats[3].level = 4;

	cats[4].name = "�ų���";
	cats[4].age = 1;
	cats[4].character = "�����";
	cats[4].level = 5;
}

void printCat(int selected)
{

	printf("\n\n=== ����� �� �������� ���簡 �Ǿ����! === \n\n");
	printf("�̸�       : %s\n", cats[selected].name);
	printf("����       : %d\n", cats[selected].age);

	printf("Ư¡(����) : %s\n", cats[selected].character);
	printf("����       : %dn", cats[selected].level);

	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "��");

	}
	printf("\n\n");
}

int checkCollection() {
	// 1. ���� ������ ������ ��ϵ� ���
	// 2. �� ��Ҵ��� ���θ� ��ȯ

	int collecAll = 1;

	printf("\n\n === ������ ������ ����̿��� === \n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0) // ������ ���� X
		{
			printf("%10s", "(�� �ڽ�)");
			collecAll = 0;
		}
		else // ������ ���� O
		{
			printf("%10s", cats[i].name);
		}
	}

	printf("\n================\n\n");

	if (collecAll == 1)
	{
		printf("\n\n �����մϴ� ! ��� �����̸� �� ��Ҿ��, ������ Ű���ּ��� \n\n");

	}
	return collecAll;

}