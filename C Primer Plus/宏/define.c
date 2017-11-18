#include <stdio.h>
#include"Link.h"
#define STARS1 printf("*******************************************************\n")
#define STARS2 printf("*******************************************************\n");
#define NN "3.1415\
926535"
//关于明示常量它本质上实在编译前就行字符串的替换工作
void define() {
	STARS1;
	STARS2
	printf(NN);
}