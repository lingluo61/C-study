#define _CRT_SECURE_NO_WARNINGS

/*
	������ƽ���͸�������ƽ����������
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
//	printf("������һ��������");
//	scanf("%d", &n);
//	printf("������ƽ����%d��\n", sqr_int(n));
//
//	printf("������һ��ʵ����");
//	scanf("%lf", &x);
//	printf("������ƽ����%f��\n", sqr_double(x));
//
//	return 0;
//}

/*
	����ʽ���֮����ʽ����Խ��и����ӵĴ���
*/
//#include <stdio.h>
//
//#define sqr(x) ((x) * (x))    // ���� x ��ƽ���ĺ���ʽ��
//
//int main(void)
//{
//	int n;
//	double x;
//
//	printf("������һ��������");
//	scanf("%d", &n);
//	printf("������ƽ����%d��\n", sqr(n));
//
//	printf("������һ��ʵ����");
//	scanf("%lf", &x);
//	printf("������ƽ����%f��\n", sqr(x));
//
//	return 0;
//}

/*
	�ڶ����ʹ�ú���ʽ��ʱ������ϸ�����Ƿ�����������
	�磺sqr(a++) չ����Ϊ ((a++) * (a++))�����������Σ��������治�ᡣ
*/