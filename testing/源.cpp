#include<stdio.h>
#include<string.h>
int main()
{
	char ch[4] = "123", mima[4] = "asd";
	char ch1[50], mima1[20];
	printf("请输入用户名和密码\n用户名：");
	scanf_s("%s", &ch1,1);
	printf("请输入密码："); 
	scanf_s("%s", &mima1, 1);
	int i;
	for (i = 0; i < 3; i++)
	{
		if (strcmp(ch1, ch) && strcmp(mima1, mima))
		{
			printf("密码正确！登陆成功！");
			break;
		}
		else
		{
			printf("密码或账号错误！请重新输入！\n");
			printf("请输入用户名和密码\n用户名："); 
			scanf_s("%s", &ch1, 1);
			printf("请输入密码：");
			scanf_s("%s", &mima1, 1);
		}
	}
	
	return 0;
}

