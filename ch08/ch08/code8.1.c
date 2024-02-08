#define _CRT_SECURE_NO_WARNINGS

/*
	整数的平方和浮点数的平方（函数）
*/
//#include <stdio.h>
//
//int sqr_int(int x)
//{
//	return x * x;
//}
//
//double sqr_double(double x)
//{
//	return x * x;
//}
//
//int main(void)
//{
//	int n;
//	double x;
//
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	printf("该数的平方是%d。\n", sqr_int(n));
//
//	printf("请输入一个实数：");
//	scanf("%lf", &x);
//	printf("该数的平方是%f。\n", sqr_double(x));
//
//	return 0;
//}

/*
	函数式宏较之对象式宏可以进行更复杂的代换
*/
//#include <stdio.h>
//
//#define sqr(x) ((x) * (x))    // 计算 x 的平方的函数式宏
//
//int main(void)
//{
//	int n;
//	double x;
//
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	printf("该数的平方是%d。\n", sqr(n));
//
//	printf("请输入一个实数：");
//	scanf("%lf", &x);
//	printf("该数的平方是%f。\n", sqr(x));
//
//	return 0;
//}

/*
	在定义和使用函数式宏时，请仔细考虑是否会产生副作用
	如：sqr(a++) 展开后为 ((a++) * (a++))，会自增两次，而函数版不会。
*/