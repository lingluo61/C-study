#define _CRT_SECURE_NO_WARNINGS

/*
	��ʾ�ַ����������ĳ���
*/
//#include <stdio.h>
//
//int main(void)
//{
//	printf("sizeof(\"123\")          = %u\n", (unsigned)sizeof("123"));
//	printf("sizeof(\"AB\\tC\")        = %u\n", (unsigned)sizeof("AB\tC"));
//	printf("sizeof(\"abc\\0def\")     = %u\n", (unsigned)sizeof("abc\0def"));
//
//	return 0;
//}

/*
	���ַ����洢�������в���ʾ����1����ֵ��
*/
//#include <stdio.h>
//
//int main(void)
//{
//	char str[4];
//
//	str[0] = 'A';
//	str[1] = 'B';
//	str[2] = 'C';
//	str[3] = '\0';
//
//	printf("�ַ���strΪ\"%s\"��\n", str);
//
//	return 0;
//}

/*
	���ַ����洢�������в���ʾ����2����ʼ����
*/
//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "ABC";
//
//	printf("�ַ���strΪ\"%s\"��\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "ABC\0EF";    // �ַ����� \0 ����
//
//	printf("�ַ���strΪ\"%s\"��\n", str);
//
//	return 0;
//}

/*
	ѯ�����ֲ���ʾ�ʺ����ȡ�ַ�����
*/
//#include <stdio.h>
//
//int main(void)
//{
//	char name[48];
//
//	printf("������������֣�");
//	scanf("%s", name);
//
//	printf("��ã�%s ����/Ůʿ\n", name);
//
//	return 0;
//}

/*
	��ϰ9-2
*/
//#include <stdio.h>
//
//int main(void)
//{
//	char s[] = "ABC";
//	printf("\"%s\"\n", s);
//	s[0] = '\0';
//	printf("\"%s\"\n", s);
//
//	return 0;
//}