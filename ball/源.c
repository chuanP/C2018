#include <stdio.h>
#include <windows.h>
#include "标头.h"

/*
*  绘制碰撞的边框         1
*  碰撞的时候有\a         1
*  有速度的限制            1
*  调整边界和速度
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
		**方框移动,大小更改
		**TODO：让画面在更改的同时输入结果？？！怎么做
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

