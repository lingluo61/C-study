#define _CRT_SECURE_NO_WARNINGS

/*
	�붨��һ������ʽ�� diff(x, y)������ x, y ��ֵ֮��
*/
//#include <stdio.h>
//
//#define diff(x, y) ((x > y) ? (x - y) : (y - x))
//
//int main(void)
//{
//	int x, y;
//	printf("��������������:");
//	scanf("%d%d", &x, &y);
//	printf("��ֵ֮����%d��\n", diff(x, y));
//	return 0;
//}

/*
	��ϰ8-2
*/
//#include <stdio.h>
//
//#define max(x, y) (((x) > (y)) ? (x) : (y))
//
//int main(void)
//{
//	int x, y, m, n;
//	printf("�������ĸ�������");
//	scanf("%d%d%d%d", &x, &y, &m, &n);
//	printf("�ĸ��������ֵΪ%d��\n", max(max(x, y), max(m, n)));
//	printf("�ĸ��������ֵΪ%d��\n", max(max(max(x, y), m), n));
//	return 0;
//}

/*
	��ϰ8-3
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