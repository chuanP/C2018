#include"head.h"




void show() {
	goToxy(0, 0);

}

void startUp() {

}

void updateWithInput() {

}

void updateWithoutInput() {

}

void goToxy(int x, int y) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);
}

void HideCursor() {
	CONSOLE_CURSOR_INFO cursor_info = { 1,0 };//第二个隐藏光标
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);

}
