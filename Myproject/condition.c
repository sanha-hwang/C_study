#include <stdio.h>
#include <time.h>

int main_condition(void)
{
	// if (조건) {...} else {...}
	
	// if (조건) {...} else if (조건) {...} else {...}

	//int age = 25;

	//if (age >= 8 && age <= 13)
	//{
	//	printf("초등학생 입니다.\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("중학생 입니다\n");

	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("고등학생 입니다\n");
	//}
	//else
	//{
	//	printf("청소년이 아닌가봐요");
	//}

	//break / continue
	//1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6)
	//	{
	//		printf("나머지 학생은 집에 가세요\n");
	//		break;
	//	}
	//	printf("%d 번 학생은 조별 발표 준비를 하세여\n", i);
	//}

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;

			}
			printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);

		}
	}*/

	//&& ||

	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 12;
	
	if (a == b || c == d)
	{
		printf("a와 b 혹은 c와 d의 값이 같습니다.\n");;
	}
	else
	{
		printf("서로 값이 다르네요");
	*/

//int num = rand() % 3; //0~2
//
//printf("난수 초기화 이전..\n");
//for (int i = 0; i < 10; i++)
//{
//	printf("%d\n", rand() % 10);
//}
//
//srand(time(NULL)); // 난수 초기화
//printf("\n\n 난수 초기화 이후..\n");
//for (int i = 0; i < 10; i++)
//{
//	printf("%d\n", rand() % 10);
//}

	// 가위 0 바위 1 보 2
	srand(time(NULL));
	int i = rand() % 3; // 0~2 반환

	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else
	//{
	//	printf("보\n");
	//}
		
	/*switch (i)
	{
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	defualt:printf("몰라요\n"); break;
	}*/

	/*int age = 15;

	switch (age)
	{
	case 8: 
	case 9: 
	case 10:
	case 11:
	case 12:
	case 13: printf("초등학생 입니다.\n"); break;
	case 14:
	case 15:
	case 16: printf("중학생 입니다.\n"); break;
	case 17:
	case 18:
	case 19:  printf("고등학생 입니다.\n"); break;
	default: printf("학생이 아닌가봐요");

	}*/
	
	// project Up & Down

	srand(time(NULL));
	int num = rand() % 100 + 1;

	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (chance > 0)
	{
		printf("남은 기회 %d번 \n", chance--);
		printf("숫자를 맞혀보세요 (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("Down ↓ \n\n");
		}
		else if (answer < num)
		{
			printf("Up ↑ \n\n");

		}
		else if (answer == num)
		{
			printf("정답입니다!! \n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했어요 \n\n");
		}
		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요 아쉽네요\n");
		}
	}

	

	return 0;
}