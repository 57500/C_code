#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("  %c\n %c%c%c\n%c%c%c%c%c", a, a, a, a, a, a, a, a, a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = 0;
//	c = a * b;
//	printf("%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	char a = 'w';
//	scanf("%c", &a);
//	char b = a - 32;
//
//	printf("%c\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("Hello,World!");
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d\n", b);
//
//}

//#include<stdio.h>
//int main()
//{
//	float a = 0;
//	int b = 0;
//	scanf("%f %d", &a, &b);
//	float c = a / b;
//	int d = b * 2;
//	printf("%.3f\n%d\n", c, d);
//
//}
//
//#include<stdio.h>
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int p = (a + b + c) / 2;
//	int s = p * (p - a) * (p - b) * (p - c);
//	 double d= sqrt(s);
//	printf("%.1lf\n", d);
//
//
//}

//#include<stdio.h>
//void swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前%d %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后%d %d", a, b);
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i=i+2)
//	{
//		int j = 0;
//		int a = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			
//			if (i%j==0)
//			{
//				a=0;
//				break;
//			}
//		}
//		if (a)
//		{
//			printf("%d ", i);
//		}
//	}
//
//}

//#include<stdio.h>
//#include<math.h>
//
//sushu(a)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(a); j++)
//	{
//		if (a % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (sushu(i))
//		printf("是素数");
//	else
//		printf("不是素数");
//}

//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//				printf("%d ",year);
//		}
//		if (year % 400 == 0)
//			printf("%d ",year);
//	}
//}

