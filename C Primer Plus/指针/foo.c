#include "heda.h"

void swap(int *num1, int *num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void Loop_Array(int *array,int num) {
	int *temp;
	temp = array;
	for (int i = 0; i < num; i++) {
		printf("%d\n",*temp++);
	}
}

void Reverse_Arrary(int*arrary, int length) {
	int*temp;
}