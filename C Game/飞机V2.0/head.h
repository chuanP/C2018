#pragma once
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <conio.h>
/*
	�����ʼ��
	��ʾ����
	�û������йظ���
	�û������޹ظ���
*/



int high, width;
int position_x, position_y;//�ɻ�
int bullet_x, bullet_y; //�ӵ�
int enemy_x, enemy_y;//����
int score ;//����

void startUp(void);
void show(void);
void updateWithoutInput(void);
void updateWithInput(void);
void goToxy(int x,int y);//���Ƶĺ���
void HideCursor();//���ع��