#include <stdio.h>
#include <time.h>


// 10마리의 서로 다른 동물 (각 카드 2장씩)
// 사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
// 모든 동물 쌍을 찾으면 게임 종료
// 총 실패 횟수 알려주기

int arrayAnimal[4][5]; // 카드 지도 (20장)
int checkAnimal[4][5]; // 뒤집혔는지 여부 확인
void initAnimalArray();
void initAnimalName();
char* strAnimal[10];
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals(); // 동물 위치 출력
void printQuestion(); // 문제 출력 (카드 지도)
int foundAllAnimal();


int main(void)
{
	srand(time(NULL));
	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCount = 0; // 실패 횟수

	while (1)
	{
		int select1 = 0; // 사용자가 선택한 처음 수
		int select2 = 0; // 사용자가 선택한 두번째 수

		printAnimals(); // 동물 위치 출력
		printQuestion(); // 문제 출력 (카드 지도)

		printf("뒤집을 카드를 2개 고르세요 : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
		{
			continue;
		}
		else
		{

			// 좌표에 해당하는 카드를 뒤집어보고 같은지 안같은지 확인
			int firstSelect_x = conv_pos_x(select1);
			int firstSelect_y = conv_pos_y(select1);

			int secondSelect_x = conv_pos_x(select2);
			int secondSelect_y = conv_pos_y(select2);

			if (((checkAnimal[firstSelect_x][firstSelect_y] == 0)
				&& (checkAnimal[secondSelect_x][secondSelect_y] == 0))  // (카드가 뒤집히지 않았는지) && 

				&& 
				(arrayAnimal[firstSelect_x][firstSelect_y] 
					 == arrayAnimal[secondSelect_x][secondSelect_y])) // (두 동물이 같은지)
			
			{
				printf("\n\n 빙고 !! : %s 발견 \n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
				checkAnimal[firstSelect_x][firstSelect_y] = 1;
				checkAnimal[secondSelect_x][secondSelect_y] = 1;
			}
			else
			{
				printf("\n\n 땡 !! (틀렸거나 이미 뒤집힌 카드입니다.\n");
				printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
				printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);

				printf("\n\n");

				failCount++;
			}
		
			// 모든 동물을 찾았는지 여부 참 : 1, 거짓 : 0
			if (foundAllAnimal() == 1)
			{
				printf("\n\n 축하합니다 ! 모든 동물을 다 찾았네요 \n");
				printf("지금가지 총 %d 번 실수하였습니다.\n", failCount);
				break;
			}

		}
	}

	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1; // 값 초기화
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "원숭이";
	strAnimal[1] = "하마";
	strAnimal[2] = "강아지";
	strAnimal[3] = "고양이";
	strAnimal[4] = "돼지";

	strAnimal[5] = "코끼리";
	strAnimal[6] = "기린";
	strAnimal[7] = "낙타";
	strAnimal[8] = "타조";
	strAnimal[9] = "호랑이";

}

void shuffleAnimal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

//좌표에서 빈 공간 찾기
int getEmptyPosition()
{


	while (1)
	{
		int randPos = rand() % 20; // 0-19 사이의 숫자 반환

		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}

	}
	return 0;
}

int conv_pos_x(int x) // 5로 나눈 몫 전달
{
	return x / 5;
}


int conv_pos_y(int y) // 5로 나눈 나머지 전달
{
	return y % 5;
}


void printAnimals() // 동물 위치 출력
{

	printf("\n =====이건 비밀인데 좀 보여줄게 ^.^*=====\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
}




void printQuestion()// 문제 출력 (카드 지도)
{
	printf("\n\n(문제)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// 카드를 뒤집어서 정답을 맞혔으면 '동물 이름'
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			// 아직 뒤집지 못햇으면 (정답을 못맞혔으면) 뒷면 -> 위치를 나타내는 숫자
			else
			{
				printf("%8d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}
int foundAllAnimal()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}