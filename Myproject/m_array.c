#include <stdio.h>
#include <time.h>

int main_m_array(void)
{
	// ������ �迭 multi demensional array
	

	int arr[4][2] = {
		{1,2},
		{1,2},
		{1,2},
		{1,2}
	};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("2���� �迭 <%d, %d>�� �� : %d\n", i, j, arr[i][j]);
		};
	}




	return 0;
}