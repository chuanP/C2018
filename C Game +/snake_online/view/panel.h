#include "../common/WinApiHelper.h"

/*
基础面板的绘制
*/

/*
面板的基础属性
*/
typedef struct _base_panel {
	int x;//起始坐标
	int y;//起始坐标
	int width;//面板宽
	int height;//面板高
	int color;//前景色
	int backGround;//背景色
	char hLetter;//水平字符
	char vLetter;//竖直字符
}Panel;

/*
面板初始化
*/
Panel* panelInitialize(void);

/*
面板绘制
*/
void drawPanel(Panel* panel);