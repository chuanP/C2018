#include <stdio.h>
#include<windows.h>
#include <conio.h>


/*
*	飞机的形状
*	子弹的射出
*	靶的随机出现
*	分数的统计
*/
int main()
{
	int x = 1, y = 1;
	int i, j;
	char input;
	int isFire=0;
	while (1)
	{
		system("cls");

		//顶层输出方式
		{
			if (isFire == 0) {
				for (j = 0; j < y; j++)
				{
					printf("\n");
				}
			}
			if (isFire == 1) {
				for (j = 0; j < y; j++)
				{
					for (i = 0; i < x; i++)
					{
						printf(" ");
					}
					printf("  |\n");

				}
			}
		}
		//机体输出
		{
		for (i=0;i<x;i++)
		{
			printf(" ");
		}
		printf("  *\n");
		for (i = 0; i<x; i++)
		{
			printf(" ");
		}
		printf("*****\n");
		for (i = 0; i<x; i++)
		{
			printf(" ");
		}
		printf(" * * ");
		}
		//让子弹具有存在时间
		if (isFire == 1) {
			isFire = 0;
			Sleep(20);
			continue;
		}
		input = _getch();
		//判断输入的方向和攻击判定
		switch (input) {
			case 'w':
				y--;
				break;
			case's' :
				y++;
				break;
			case 'a':
				x--;
				break;
			case 'd':
				x++;
				break;
			case ' ':
				isFire = 1;
				break;
			default:break;
		}
	}
	return 0;
}