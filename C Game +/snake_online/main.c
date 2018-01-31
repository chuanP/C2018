#include"common\WinApiHelper.h"
#include"view\ControlPanel.h"
int main()
{
	setTitle("Ì°³ÔÉß£¨¼ÙµÄ£©");
	setWinSize(60,27);
	drawControlPanel();
	getchar();

	return 0;
}