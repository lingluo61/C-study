#define _CRT_SECURE_NO_WARNINGS

/*
	不使用递归实现阶乘
*/
//#include <stdio.h>
//
//int factorial(int n)
//{
//	int num = 1;
//	for (; n > 0; n--)
//	{
//		num *= n;
//	}
//	return num;
//}
//
//int main(void)
//{
//	int num;
//
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//
//	printf("%d 的阶乘为 %d\n", num, factorial(num));
//
//	return 0;
//}

/*
	练习8-7
*/
//#include <stdio.h>
//
///* 计算阶乘 */
//int factorial(int n)
//{
//	if (n > 0)
//		return n * factorial(n - 1);
//	else
//		return 1;
//}
//
///* 计算组合数 */
//int combination(int n, int r)
//{
//	if (r > 0)
//		return factorial(n) / factorial(r) * factorial(n - r);
//	else
//		return 1;
//}
//
//int main(void)
//{
//	int n, r;
//	printf("求出从n个不同整数取出r个整数的组合数。\n");
//	printf("请输入n：");
//	scanf("%d", &n);
//	printf("请输入r：");
//	scanf("%d", &r);
//	printf("组合数为：%d\n", combination(n, r));
//
//	return 0;
//}

/*
	练习8-8
*/
//#include <stdio.h>
//
//int gcd(int x, int y)
//{
//	int z;
//	if (x != y)
//	{
//		if (x > y)
//			x -= y;
//		if (y > x)
//			y -= x;
//		z = gcd(x, y);
//	}
//	else
//		z = x;
//	return z;
//}
//
//int main(void)
//{
//	int x, y;
//	printf("请输入两个整数：");
//	scanf("%d%d", &x, &y);
//
//	printf("两个数的最大公约数为：%d", gcd(x, y));
//
//	return 0;
//}