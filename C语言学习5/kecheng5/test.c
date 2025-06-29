#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
// 
//		printf("%d ", a);
//		printf("hehe");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	for (;;)
//	{
//		printf("hehe");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b < 10; b++)
//		{
//			printf("%d ", b);
//		}
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (; a < 3; a++)
//	{
//		for(;b<3;b++)
//		{
//			printf("%d ", b);
//		}
//	}
//}

//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    do
//    {
//        i++;
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//
//    } while (i <= 10);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int add = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			
//			ret = ret * i;
//
//		}
//		add = add + ret;
//	}
//	printf("%d\n", add);
//	return 0;
//}

#include<Stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 1;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	while (left <= right)
	{
		int mid = (right + left) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else 
		{
			printf("找到了%d\n",mid);
			break;
		}
		
	}
	if (left > right)
	{
		printf("找不到");

	}
	return 0;
}