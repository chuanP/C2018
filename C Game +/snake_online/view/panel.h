#include "../common/WinApiHelper.h"

/*
�������Ļ���
*/

/*
���Ļ�������
*/
typedef struct _base_panel {
	int x;//��ʼ����
	int y;//��ʼ����
	int width;//����
	int height;//����
	int color;//ǰ��ɫ
	int backGround;//����ɫ
	char hLetter;//ˮƽ�ַ�
	char vLetter;//��ֱ�ַ�
}Panel;

/*
����ʼ��
*/
Panel* panelInitialize(void);

/*
������
*/
void drawPanel(Panel* panel);