#define _CRT_SECURE_NO_WARNINGS

/*
	��ȡѧ������߲�����
*/
//#include <stdio.h>
//
//#define NUMBER 5
//
///* ð������ */
//void bsort(int a[], int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j + 1] < a[j])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	int i;
//	int height[NUMBER];
//
//	printf("������%d�˵���ߡ�\n", NUMBER);
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%2d�ţ�", i + 1);
//		scanf("%d", &height[i]);
//	}
//
//	bsort(height, NUMBER);    // ����
//
//	puts("���������С�");
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%2d��%d\n", i + 1, height[i]);
//	}
//
//	return 0;
//}