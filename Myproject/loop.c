#include <stdio.h>

int main_loop(void)
{
	// printf("Helll world");

	//// ++ 쁠쁠
	//int a = 10;
	//printf("a는 %d\n", a);
	//a++;
	//printf("a는 %d\n", a);

	/*int b = 20;
	
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	printf("b는 %d\n", b);*/

	/*int i = 1;
	printf("Hello world %d\n", i++);
	printf("Hello world %d\n", i++);
	printf("Hello world %d\n", i++);
	printf("Hello world %d\n", i++);
	printf("Hello world %d\n", i++);
	printf("Hello world %d\n", i++);
	printf("Hello world %d\n", i++);
	printf("Hello world %d\n", i++);
	printf("Hello world %d\n", i++);*/

	// 반복문
	// for, while, do while

	//for (선언, 조건, 증감)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello world %d\n", i);

	}*/

	// while (조건)

	/*int i = 1;
	while (i <= 10) 
	{
		printf("Hello world %d\n", i++);
	}*/

	// do {} while(조건);

	//int i = 1;
	//do {
	//	printf("Hello world %d\n", i++);
	//} while (i <= 10);

	// 2중 반복문
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫번째 반복 :  %d\n", i);
		
		for (int j = 1; j <= 5; j++)
		{
			printf("두번째 반복은 : %d\n", j);
		}

	}*/

	// 구구단 짜보기
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d : %d\n", i, j, i*j);
		}

	}*/

	/*for (int i = 0; i < 5; i++)
	{

		for (int k = i;  k < 5 - 1; k++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// 피라미드를 쌓아라는 프로젝트

	//int floor;
	//printf("몇 층으로 쌓겠느냐?");
	//scanf_s("%d", &floor);

	//for (int i = 0; i < floor; i++)
	//{
	//	for (int k = i; k < floor - 1; k++)
	//	{
	//		printf(" ");
	//	}
	//	for (int j = 0; j <= i*2 + 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	// 조건 / 분기




	return 0;

}