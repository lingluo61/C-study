#define _CRT_SECURE_NO_WARNINGS

/*
	��ʹ�õݹ�ʵ�ֽ׳�
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
//	printf("������һ��������");
//	scanf("%d", &num);
//
//	printf("%d �Ľ׳�Ϊ %d\n", num, factorial(num));
//
//	return 0;
//}

/*
	��ϰ8-7
*/
//#include <stdio.h>
//
///* ����׳� */
//int factorial(int n)
//{
//	if (n > 0)
//		return n * factorial(n - 1);
//	else
//		return 1;
//}
//
///* ��������� */
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
//	printf("�����n����ͬ����ȡ��r���������������\n");
//	printf("������n��");
//	scanf("%d", &n);
//	printf("������r��");
//	scanf("%d", &r);
//	printf("�����Ϊ��%d\n", combination(n, r));
//
//	return 0;
//}

/*
	��ϰ8-8
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
//	printf("����������������");
//	scanf("%d%d", &x, &y);
//
//	printf("�����������Լ��Ϊ��%d", gcd(x, y));
//
//	return 0;
//}