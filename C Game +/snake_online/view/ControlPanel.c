#include "ControlPanel.h"
Panel* _control_panle = NULL;
void drawControlPanel()
{
	if (_control_panle==NULL) {
		_control_panle = panelInitialize();
		_control_panle = panelInitialize();
		_control_panle->x = 2;
		_control_panle->y = 2;
		_control_panle->width = 18;
		_control_panle->height = 18;
		_control_panle->color = 0xe;
		_control_panle->backGround = 0x9;
	}
	drawPanel(_control_panle);
}
