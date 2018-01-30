#include "WinApiHelper.h"

/*
全局窗体的句柄
*/
HANDLE std_win_handle = 0;
/*
获取标准的输出句柄
*/
void setWinHandle() {
	if (std_win_handle==0) {
		std_win_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	}
}

void setTitle(char * title)
{
	SetConsoleTitle(TEXT(title));
}

void setWinSize(int width, int height)
{
	SMALL_RECT rect = {0,0,width-1,height-1};//窗体大小区域
	COORD coord = {width,height};//缓冲区的区域
	setWinHandle();
	SetConsoleScreenBufferSize(std_win_handle, coord);//设置缓冲区
	SetConsoleWindowInfo(std_win_handle,TRUE,&rect);//设置窗体大小

}

void setCurrorPostion(int x, int y)
{
	COORD pos = {x,y};
	setWinHandle();
	SetConsoleCursorPosition(std_win_handle,pos);
}

void setColor(int color)
{
	setWinHandle();
	SetConsoleTextAttribute(std_win_handle,color);
}

void drawHLine(int x, int y, int color, int letter, int length)
{
	setCurrorPostion(x,y);
	setColor(color);
	int i;
	for (i = 0; i < length;i++) {
		printf("%c",letter);
	}

}

void drawVLine(int x, int y, int color, int letter, int length)
{
	setCurrorPostion(x,y);
	setColor(color);
	int i;
	for (i = 0; i < length; i++) {
		printf("%c",letter);
		setCurrorPostion(x,++y);
	}
}

void printText(char * text, int size)
{
	char format[30]="%-";
	char sizebuf[5];
	//这些函数中都有缓冲区域大小的限制 防止溢出
	_itoa_s(size,sizebuf,5,10);//最后一个代表进制数
	strcat_s(format,30,sizebuf);
	strcat_s(format,30,"s");
	printf(format,text);
}

void fillText(int x, int y, int lenght, int width, int letter, int color)
{
	int i;
	setWinHandle();
	DWORD relence;
	for (i = 0; i < width;i++) {
		COORD coord = {x,y++};
		FillConsoleOutputAttribute(std_win_handle, color, lenght, coord, &relence);
	}
}

char readChar(void)
{
	char rech = 0;
	if (_kbhit()) {
		rech = _getch();
	}
	return rech;
}
