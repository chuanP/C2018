#include <stdio.h>
#include <windows.h>
#include "��ͷ.h"

/*
���Ʊ߽����ң����ڣ�
*/
void Part1(int left, int right) {
	int temp;
	for (temp = 1; temp < left; temp++) printf(" ");
	printf("|");
	for (temp = 1; temp < right - left; temp++) printf(" ");
	printf("|\n");
}
/*
�������ڵ���һ��
*/
void Part2(int x, int left, int right) {
	int temp;
	for (temp = 1; temp < left; temp++) printf(" ");
	printf("|");
	for (temp = 1; temp < x - 1; temp++) printf(" ");
	printf("��");
	for (temp = 1; temp < right - left - x; temp++) printf(" ");
	printf("|\n");
}
/*
��Ҳ���Ǹ�����
*/
void Loction(int x, int y, int top, int bottom, int right, int left)
	{
		int loction_x, loction_y, temp;

		for (temp = 0; temp < top; temp++) printf("\n");//���ƶ����հ�   1

		for (temp = 1; temp < left; temp++) printf(" ");//�����Ҳඥ��    1

		for (temp = 0; temp < right - left + 1; temp++) printf("-");//    1

		printf("\n");//    1

		for (temp = 1; temp < y + 1; temp++) Part1(left, right);//     1

		Part2(x, left, right);//    1

		for (temp = 1; temp < bottom - top - y + 1; temp++) Part1(left, right);//    1

		for (temp = 1; temp < left; temp++) printf(" ");//    1

		for (temp = 0; temp < right - left + 1; temp++) printf("-");//    

	}


