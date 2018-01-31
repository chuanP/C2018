#include "panel.h"

Panel * panelInitialize(void)
{
	Panel* panel = (Panel*)malloc(sizeof(Panel));
	memset(panel,0,sizeof(Panel));
	panel->height=5;
	panel->width=5;
	panel->color=0xf;
	panel->backGround=0x0;
	panel->hLetter='-';
	panel->vLetter='|';
	return panel;
}

void drawPanel(Panel * panel)
{
	fillText(panel->x,panel->y,panel->height,panel->width,' ',panel->color<<4|panel->backGround);
	drawVLine(panel->x,panel->y,panel->color<<4|panel->backGround,panel->vLetter,panel->height);
	drawVLine(panel->x+panel->width-1,panel->y,panel->color<<4|panel->backGround,panel->vLetter,panel->height);
	drawHLine(panel->x, panel->y, panel->color << 4 | panel->backGround, panel->hLetter, panel->width);
	drawHLine(panel->x, panel->y+panel->width, panel->color << 4 | panel->backGround, panel->hLetter, panel->width);
}
