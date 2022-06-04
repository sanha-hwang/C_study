#include <stdio.h>

// 선언

void p(int num);
int apple(int total, int ate);
int add(int num1, int num2);
int sub(int num1, int num2);
int multiple(int num1, int num2);
int divide(int num1, int num2);


int main_function(void)
{
	//function
	//계산기

	//int num = 2;
	//p(num);

	//// 2+ 3은 ?
	//num = num + 3;
	//p(num);
	//// 5-1은?
	//num -= 1;
	//p(num);
	//// 4 * 3은?
	//num *= 3;
	//p(num);

	//int ret = apple(5, 2);
	//printf("사과 %d개 중에 %d개를 먹으면? %d가 남습니다.\n", 10,4, apple(10, 4));
	
	// 계산기 함수
	/*int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = multiple(num, 3);
	p(num);

	num = divide(num, 6);
	p(num);*/



	return 0;
}
// 반환형, 함수 이름(전달값)
void p(int num)
{
	printf("num은 %d입니다.\n", num);
}

int apple(int total, int ate)
{
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}
int multiple(int num1, int num2)
{
	return num1 * num2;
}
int divide(int num1, int num2)
{
	return num1 / num2;
}
