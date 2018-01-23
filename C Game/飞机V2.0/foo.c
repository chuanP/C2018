#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include"head.h"




void show() {
	goToxy(0,0);
	int i, j;
	for (i = 0; i < high; i++) {
		for (j = 0; j < width;j++) {
			if (position_x == j && position_y == i) {
				printf("  *  ");
			}
			else if (position_x == j && position_y +1== i) printf("*****");
			else if (position_x == j && position_y + 2 == i) printf(" * * ");
			else if(bullet_x == j && bullet_y == i) printf("|");
			else if (enemy_x == j && enemy_y == i) printf("@");
			else printf(" ");
		}
		printf("\n");
	}
	printf("分数是:%d",score);
	
}

void startUp() {

	high = 25;
	width = 50;
	position_x = width / 2;
	position_y = high / 2;
	enemy_x = rand() % (width - 10) + 5;
	enemy_y = 0;
	score = 0;
}

void updateWithInput() {
	char input;
	if (_kbhit()) {
		input = _getch();
		switch (input) {
			case 'a':
				position_x--;
				break;
			case 'd':
				position_x++;
				break;
			case'w':
				position_y--;
				break;
			case's':
				position_y++;
				break;
			case' ':
				bullet_x = position_x+2;
				bullet_y = position_y - 1;
				break;
			default:
				break;
		}
	}
}

void updateWithoutInput() {

	/*
	统计分数
	*/
	if (bullet_x == enemy_x && bullet_y == enemy_y) {
		score++;
		enemy_x = rand()%(width-10)+5;
		enemy_y = 0;
	}

	if(bullet_y>-1) bullet_y--; //子弹的飞行轨迹

	/*
	控制敌人下降的速度
	*/
	static int enemySpeed = 0;
	if (enemySpeed < 5) {
		enemySpeed++;
	}
	if (enemySpeed ==5) {
		if (enemy_y>high) {
			enemy_y = 0;
			enemy_x = rand() % (width - 10) + 5;
		}
		else
		{
			enemy_y++;
			enemySpeed = 0;
		}
	}	
}

void goToxy(int x,int y) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y = y;
	SetConsoleCursorPosition(handle,pos);
}

void HideCursor() {
	CONSOLE_CURSOR_INFO cursor_info = {1,0};//第二个隐藏光标
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);

}
