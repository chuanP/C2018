#include <stdio.h>
#include <windows.h>
#include "��ͷ.h"

/*
*  ������ײ�ı߿�         1
*  ��ײ��ʱ����\a         1
*  ���ٶȵ�����            1
*  �����߽���ٶ�
*/


int main()
{
	
	int Top=0, Bottom=25, Right=50,Left=0;
	int x=5, y=1;
	int velocity_x = 1;
	int velocity_y=1;
	int trans;
	while (1) {
		/*
		**�����ƶ�,��С����
		**TODO���û����ڸ��ĵ�ͬʱ��������������ô��
		*/
		switch () {

		}


		system("cls");
		x += velocity_x;
		y += velocity_y;
		Loction(x,y, Top, Bottom, Right, Left);
		Sleep(20);
		if (x<1 || x>Right-Left-1) velocity_x *= -1;
		if (y<1 || y>Bottom-Top-1) velocity_y *= -1;
		if (x == 1 || y == 1||x==(Right - Left - 1)|| y==(Bottom - Top - 1)) printf("\a");
	}
	//system("pause");
	return 0;
}

