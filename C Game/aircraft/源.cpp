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
	int isFire=0;
	while (1)
	{
		system("cls");

		//���������ʽ
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
		//�������
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
		//���ӵ����д���ʱ��
		if (isFire == 1) {
			isFire = 0;
			Sleep(20);
			continue;
		}
		input = _getch();
		//�ж�����ķ���͹����ж�
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