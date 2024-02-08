#define _CRT_SECURE_NO_WARNINGS

/*
	请在程序中定义表示性别、季节等的枚举类型，并有效的使用它们。
*/
//#include <stdio.h>
//
//enum sex { Man, Woman, Exit };
//enum season { Spring, Summer, Autumn, Winter, Invalid };
//
//void man(void) {
//	printf("男生\n");
//}
//void woman(void) {
//	printf("女生\n");
//}
//
//void spring(void) {
//	printf("春天\n");
//}
//void summer(void) {
//	printf("夏天\n");
//}
//void autumn(void) {
//	printf("秋天\n");
//}
//void winter(void) {
//	printf("冬天\n");
//}
//
//enum sex select1(void)
//{
//	int tmp;
//	printf("你是男生还是女生：0-男 1-女 2-退出\n");
//	scanf("%d", &tmp);
//	return tmp;
//}
//enum season select2(void)
//{
//	int tmp;
//	printf("你喜欢什么季节：0-春天 1-夏天 2-秋天 3-冬天 4-退出\n");
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