#include <stdio.h>

// ����

void p(int num);
int apple(int total, int ate);
int add(int num1, int num2);
int sub(int num1, int num2);
int multiple(int num1, int num2);
int divide(int num1, int num2);


int main_function(void)
{
	//function
	//����

	//int num = 2;
	//p(num);

	//// 2+ 3�� ?
	//num = num + 3;
	//p(num);
	//// 5-1��?
	//num -= 1;
	//p(num);
	//// 4 * 3��?
	//num *= 3;
	//p(num);

	//int ret = apple(5, 2);
	//printf("��� %d�� �߿� %d���� ������? %d�� �����ϴ�.\n", 10,4, apple(10, 4));
	
	// ���� �Լ�
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
// ��ȯ��, �Լ� �̸�(���ް�)
void p(int num)
{
	printf("num�� %d�Դϴ�.\n", num);
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
