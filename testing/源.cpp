#include<stdio.h>
#include<string.h>
int main()
{
	char ch[4] = "123", mima[4] = "asd";
	char ch1[50], mima1[20];
	printf("�������û���������\n�û�����");
	scanf_s("%s", &ch1,1);
	printf("���������룺"); 
	scanf_s("%s", &mima1, 1);
	int i;
	for (i = 0; i < 3; i++)
	{
		if (strcmp(ch1, ch) && strcmp(mima1, mima))
		{
			printf("������ȷ����½�ɹ���");
			break;
		}
		else
		{
			printf("������˺Ŵ������������룡\n");
			printf("�������û���������\n�û�����"); 
			scanf_s("%s", &ch1, 1);
			printf("���������룺");
			scanf_s("%s", &mima1, 1);
		}
	}
	
	return 0;
}

