#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//enum RGB { Red, Green, Blue };
//
//int main(void)
//{
//	int color;
//	printf("0~2��ֵ��");
//	scanf("%d", &color);
//	printf("��ѡ����");
//	switch (color)
//	{
//	case 0:printf("��ɫ��\n"); break;
//	case 1:printf("��ɫ��\n"); break;
//	case 2:printf("��ɫ��\n"); break;
//	}
//
//	return 0;
//}


#include <stdio.h>

#define alert() (putchar('\a'))
#define putchar_ln(c) (putchar(c), putchar('\n'))

int main(void)
{
	int ch, sum = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= '0' && ch <= '9')
		{
			sum += ch - '0';
		}
		if (ch == '\n')
		{
			alert();
			putchar('\n');
		}
		else
		{
			putchar_ln(ch);
		}
	}
	printf("��������֮��Ϊ%d��\n", sum);

	return 0;
}