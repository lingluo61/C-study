#define _CRT_SECURE_NO_WARNINGS

/*
	请定义一个函数式宏 diff(x, y)，返回 x, y 二值之差
*/
//#include <stdio.h>
//
//#define diff(x, y) ((x > y) ? (x - y) : (y - x))
//
//int main(void)
//{
//	int x, y;
//	printf("请输入两个整数:");
//	scanf("%d%d", &x, &y);
//	printf("二值之差是%d。\n", diff(x, y));
//	return 0;
//}

/*
	练习8-2
*/
//#include <stdio.h>
//
//#define max(x, y) (((x) > (y)) ? (x) : (y))
//
//int main(void)
//{
//	int x, y, m, n;
//	printf("请输入四个整数：");
//	scanf("%d%d%d%d", &x, &y, &m, &n);
//	printf("四个数中最大值为%d。\n", max(max(x, y), max(m, n)));
//	printf("四个数中最大值为%d。\n", max(max(max(x, y), m), n));
//	return 0;
//}

/*
	练习8-3
*/
//#include <stdio.h>
//
//#define swap(int, x, y) { int temp; temp = x; x = y; y = temp; }
//
//int main(void)
//{
//	int a = 5;
//	int b = 10;
//	swap(int, a, b);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}