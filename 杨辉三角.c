#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#define	N 5
int main()
{
	int data[N][N];
	int i, j;
	data[0][0] = 1;
	data[1][0] = 1;
	data[0][1] = 1;
	for (i = 1; i < N; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			if (j == 0 || j == i)
			{
				data[i][j] = 1;
			}
			else
			{
				data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
			}
		}
	}
	printf("Ñî»ÔÈý½ÇÈçÏÂ£º\n");
	for (i = 0; i < N; i++)
	{

		for (j = 0; j < i + 1; j++)
		{
			printf("%9d", data[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}