#define _CRT_SECURE_NO_WARNINGS

/*
	�����׼�������г��ֵ������ַ������ڶ��棩
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
//		if (ch >= '0' && ch <= '9')
//			cnt[ch - '0']++;
//	}
//
//	puts("�����ַ��ĳ��ִ���");
//	for (i = 0; i < 10; i++)
//	{
//		printf("'%d'��%d\n", i, cnt[i]);
//	}
//
//	return 0;
//}

/*
	��ʾEOF�������ַ���ֵ
*/
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//
//	printf("EOF = %d\n", EOF);
//	for (i = 0; i < 10; i++)
//		printf("'%d'��%d\n", i, '0' + i);
//
//	return 0;
//}