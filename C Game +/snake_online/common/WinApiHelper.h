#pragma once
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<string.h>

/*
*****����ʵ��Դ�ļ�
*/


/*
���ô���ı���
*/
void setTitle(char* title);

/*
���ô����С Ҫʹ��setWindowInfoʵ�֣�Ҫʹ�þ��
*/
void setWinSize(int width,int height);

/*
���ÿ���̨�й��λ��
*/
void setCurrorPostion(int x,int y);

/*
���ô��������ֵ���ɫ
*/
void setColor(int color);

/*
���Ƴɺ���(horizontal)
*/
void drawHLine(int x,int y,int clolr,int letter,int length);

/*
���Ƴ�����(vertical)
*/
void drawVLine(int x, int y, int clolr, int letter, int length);

/*
�ı����(�ı��ܹ�ռ���ĵط�)
*/
void printText(char *text,int size);

/*
��亯��
*/
void fillText(int x,int y ,int lenght,int width,int letter,int color);

/*
���ܼ��̵�����
*/
char readChar(void);