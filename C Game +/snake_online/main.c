#include<stdio.h>
#include <conio.h>
#include "common\WinApiHelper.h"
int main()
{
	setTitle("̰���ߣ��ٵģ�");
	setWinSize(60,27);
	char ch=0;
	for (;ch!='q';) {
		ch = readChar();
		if (ch !=0) 
			printf("%c",ch);
	}
	getchar();

	return 0;
}