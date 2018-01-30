#pragma once
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<string.h>

/*
*****帮助实现源文件
*/


/*
设置窗体的标题
*/
void setTitle(char* title);

/*
设置窗体大小 要使用setWindowInfo实现，要使用句柄
*/
void setWinSize(int width,int height);

/*
设置控制台中光标位置
*/
void setCurrorPostion(int x,int y);

/*
设置窗体中文字的颜色
*/
void setColor(int color);

/*
绘制成横线(horizontal)
*/
void drawHLine(int x,int y,int clolr,int letter,int length);

/*
绘制成竖线(vertical)
*/
void drawVLine(int x, int y, int clolr, int letter, int length);

/*
文本输出(文本总共占多大的地方)
*/
void printText(char *text,int size);

/*
填充函数
*/
void fillText(int x,int y ,int lenght,int width,int letter,int color);

/*
接受键盘的输入
*/
char readChar(void);