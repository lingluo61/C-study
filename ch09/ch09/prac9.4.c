#define _CRT_SECURE_NO_WARNINGS

/*
	��ϰ9-4
*/
//#include <stdio.h>
//
//void null_string(char s[])
//{
//	s[0] = '\0';
//}
//
//int main(void)
//{
//	char s[3] = "AA";
//	printf("%s\n", s);
//	null_string(s);
//	printf("%s\n", s);
//
//	return 0;
//}

/*
	��ϰ9-5
*/
//#include <stdio.h>
//
///* �����ַ���str�ĳ��� */
//int str_length(const char s[])
//{
//	int len = 0;
//	while (s[len])
//		len++;
//	return len;
//}
//int str_char(const char s[], int c)
//{
//	int i;
//	int len = str_length(s);
//	for (i = 0; i < len; i++)
//	{
//		if (s[i] == c)
//			return i;
//	}
//	return -1;
//}
//
//int main(void)
//{
//	char s[10];
//	printf("�������ַ�����");
//	scanf("%s", s);
//	char a = 'b';
//	int sum = str_char(s, a);
//	printf("����ҵ��ַ����ֵ��±�ֵ��%d\n", sum);
//
//	return 0;
//}

/*
	��ϰ9-6
*/
//#include <stdio.h>
//
///* �����ַ���str�ĳ��� */
//int str_length(const char s[])
//{
//	int len = 0;
//	while (s[len])
//		len++;
//	return len;
//}
//int str_chnum(const char s[], int c)
//{
//	int i, sum = 0;
//	int len = str_length(s);
//	for (i = 0; i < len; i++)
//	{
//		if (s[i] == c)
//			sum++;
//	}
//	return sum;
//}
//
//int main(void)
//{
//	char s[10];
//	printf("�������ַ�����");
//	scanf("%s", s);
//	char a = 'b';
//	int num = str_chnum(s, a);
//	printf("����ҵ��ַ����ֵĸ�����%d\n", num);
//
//	return 0;
//}