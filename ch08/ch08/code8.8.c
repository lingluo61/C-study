#define _CRT_SECURE_NO_WARNINGS

/*
	将标准输入的数据复制到标准输出
*/
//#include <stdio.h>
//
//int main(void)
//{
//	int ch;
//
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}

/*
	计算标准输入流中出现的数字字符数
*/
//#include <stdio.h>
//
//int main(void)
//{
//	int i, ch;
//	int cnt[10] = { 0 };
//
//	while ((ch = getchar()) != EOF)
//	{
//		switch (ch)
//		{
//		case '0':cnt[0]++; break;
//		case '1':cnt[1]++; break;
//		case '2':cnt[2]++; break;
//		case '3':cnt[3]++; break;
//		case '4':cnt[4]++; break;
//		case '5':cnt[5]++; break;
//		case '6':cnt[6]++; break;
//		case '7':cnt[7]++; break;
//		case '8':cnt[8]++; break;
//		case '9':cnt[9]++; break;
//		}
//	}
//
//	puts("数字字符出现的次数");
//	for (i = 0; i < 10; i++)
//	{
//		printf("'%d'：%d\n", i, cnt[i]);
//	}
//
//	return 0;
//}