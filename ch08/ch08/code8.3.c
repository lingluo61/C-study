#define _CRT_SECURE_NO_WARNINGS

/*
	���岢��ʾ�ĺ궨�壨���������ɱ��룬ִ�У�
*/
//#include <stdio.h>
//
//#define puts_alert(str) { putchar('\a'); puts(str); }
//
//int main(void)
//{
//	int n;
//	printf("������һ��������");
//	scanf("%d", &n);
//
//	if (n)
//		puts_alert("���������0");
//	else
//		puts_alert("�������0");
//
//	return 0;
//}

/*
	if (n)
		{ putchar('\a'); puts("���������0"); } ;<-�����
	else   // �Ҳ��� if����������
		{ putchar('\a'); puts("�������0"); }
*/

/*
	���ű��ʽ���Խ������
*/
//#include <stdio.h>
//
//#define puts_alert(str) ( putchar('\a'), puts(str) )
//
//int main(void)
//{
//	int n;
//	printf("������һ��������");
//	scanf("%d", &n);
//
//	if (n)
//		puts_alert("���������0");
//	else
//		puts_alert("�������0");
//
//	return 0;
//}

/*
	if (n)
		( putchar('\a'), puts("���������0") ); <-���ʽ���
	else
		( putchar('\a'), puts("�������0") ); <-���ʽ���
*/