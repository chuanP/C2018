#include <stdio.h>
#include<windows.h>
#include <conio.h>


/*
*	�ɻ�����״
*	�ӵ������
*	�е��������
*	������ͳ��
*/
int main()
{
	int x = 1, y = 1;
	int i, j;
	char input;
	while (1)
	{
		system("cls");
		for (j = 0; j < y; j++)
		{
			printf("\n");
		}
		for (i=0;i<x;i++)
		{
			printf(" ");
		}
		
		printf("*\n*");
		
		input = _getch();
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

			default:break;
		}
			


	}
	return 0;
}