#define _CRT_SECURE_NO_WARNINGS

/*
	���ڳ����ж����ʾ�Ա𡢼��ڵȵ�ö�����ͣ�����Ч��ʹ�����ǡ�
*/
//#include <stdio.h>
//
//enum sex { Man, Woman, Exit };
//enum season { Spring, Summer, Autumn, Winter, Invalid };
//
//void man(void) {
//	printf("����\n");
//}
//void woman(void) {
//	printf("Ů��\n");
//}
//
//void spring(void) {
//	printf("����\n");
//}
//void summer(void) {
//	printf("����\n");
//}
//void autumn(void) {
//	printf("����\n");
//}
//void winter(void) {
//	printf("����\n");
//}
//
//enum sex select1(void)
//{
//	int tmp;
//	printf("������������Ů����0-�� 1-Ů 2-�˳�\n");
//	scanf("%d", &tmp);
//	return tmp;
//}
//enum season select2(void)
//{
//	int tmp;
//	printf("��ϲ��ʲô���ڣ�0-���� 1-���� 2-���� 3-���� 4-�˳�\n");
//	scanf("%d", &tmp);
//	return tmp;
//}
//
//int main(void)
//{
//	enum sex selected1;
//	enum season selected2;
//
//	do
//	{
//		switch (selected1 = select1())
//		{
//		case Man:man(); break;
//		case Woman:woman(); break;
//		case Exit:goto end;
//		}
//		do
//		{
//			switch (selected2 = select2())
//			{
//			case Spring:spring(); break;
//			case Summer:summer(); break;
//			case Autumn:autumn(); break;
//			case Winter:winter(); break;
//			}
//		} while (selected2 != Invalid);
//	} while (0);
//
//end:
//	return 0;
//}