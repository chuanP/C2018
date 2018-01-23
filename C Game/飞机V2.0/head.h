#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <conio.h>
/*
	界面初始化
	显示画面
	用户输入有关更新
	用户输入无关更新
*/



int high, width;
int position_x, position_y;//飞机
int bullet_x, bullet_y; //子弹
int enemy_x, enemy_y;//敌人
int score ;//分数

void startUp(void);
void show(void);
void updateWithoutInput(void);
void updateWithInput(void);
void goToxy(int x,int y);//绘制的函数
void HideCursor();//隐藏光标