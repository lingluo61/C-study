#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "12345";
//
//	printf("%s\n", str);         //12345
//	printf("%3s\n", str);        //12345
//	printf("%.3s\n", str);       //123
//	printf("%8s\n", str);        //   12345
//	printf("%-8s\n", str);       //12345
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	char cs[][6] = { "Turbo","NA","DOHC" };
//
//	for (i = 0; i < 3; i++)
//		printf("cs[%d] = \"%s\"\n", i, cs[i]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	char s[3][128];
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("s[%d]��", i);
//		scanf("%s", s[i]);
//	}
//	for (i = 0; i < 3; i++)
//		printf("s[%d] = \"%s\"\n", i, s[i]);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//#define NUM 5
//
//int main(void)
//{
//  int i;
//  char s[NUM][128];
//  for (i = 0; i < NUM; i++)
//  {
//    printf("s[%d]:", i);
//    scanf("%s", s[i]);
//    if (strcmp(s[i], "$$$$$") == 0)
//      break;
//  }
//  for (i = 0; i < NUM; i++)
//  {
//    if (strcmp(s[i], "$$$$$") == 0)
//      break;
//    else
//      printf("s[%d] = \"%s\"\n", i, s[i]);
//  }
//
//  return 0;
//}