#define _CRT_SECURE_NO_WARNINGS

/*
	响铃并显示的宏定义（误例：不可编译，执行）
*/
//#include <stdio.h>
//
//#define puts_alert(str) { putchar('\a'); puts(str); }
//
//int main(void)
//{
//	int n;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//
//	if (n)
//		puts_alert("这个数不是0");
//	else
//		puts_alert("这个数是0");
//
//	return 0;
//}

/*
	if (n)
		{ putchar('\a'); puts("这个数不是0"); } ;<-空语句
	else   // 找不到 if，报错！！！
		{ putchar('\a'); puts("这个数是0"); }
*/

/*
	逗号表达式可以解决问题
*/
//#include <stdio.h>
//
//#define puts_alert(str) ( putchar('\a'), puts(str) )
//
//int main(void)
//{
//	int n;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//
//	if (n)
//		puts_alert("这个数不是0");
//	else
//		puts_alert("这个数是0");
//
//	return 0;
//}

/*
	if (n)
		( putchar('\a'), puts("这个数不是0") ); <-表达式语句
	else
		( putchar('\a'), puts("这个数是0") ); <-表达式语句
*/