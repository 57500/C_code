#define  _CRT_SECURE_NO_WARNINGS 1


//¾àÀëº¯Êı
//#include<stdio.h>
//#include<math.h>
//float zhouchang(float* arr1, float* arr2)
//{
//	float c = 0;
//	c += sqrt((arr1[0] - arr1[1]) * (arr1[0] - arr1[1]) + (arr2[0] - arr2[1]) * (arr2[0] - arr2[1]));
//	c += sqrt((arr1[0] - arr1[2]) * (arr1[0] - arr1[2]) + (arr2[0] - arr2[2]) * (arr2[0] - arr2[2]));
//	c += sqrt((arr1[1] - arr1[2]) * (arr1[1] - arr1[2]) + (arr2[1] - arr2[2]) * (arr2[1] - arr2[2]));
//	return c;
//}
//int main()
//{
//	float arr1[3] = { 0 };
//	float arr2[3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%f %f", &arr1[i], &arr2[i]);
//	}
//	float c = 0;
//	c = zhouchang(arr1, arr2);
//	printf("%.2f", c);
//}




//ÖÊÊı
//#include<stdio.h>
//#include<math.h>
//int zhishu(int x)
//{
//	if (x == 2)
//	{
//		return 1;
//	}
//	if (x == 1)
//	{
//		return 0;
//	}
//	int n = sqrt(x);
//	for (int i = 2; i <= n; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	int arr[100000] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		int x = arr[i];
//		if (zhishu(x))
//		{
//			printf("%d ", x);
//		}
//	}
//
//}



//ÈòÄêÅĞ¶Ï
//#include<stdio.h>
//int runnian(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int count = 0;
//	for (int i = n; i <= m; i++)
//	{
//		if (runnian(i))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	for (int i = n; i <= m; i++)
//	{
//		if (runnian(i))
//		{
//			printf("%d ", i);
//		}
//	}
//}



//³ª¸è±ÈÈü
//#include<stdio.h>
//float aver(int arr[][25],int i,int m)
//{
//	int min = 10;
//	int max = 0;
//	for (int j = 0; j < m; j++)
//	{
//		if (arr[i][j] > max)
//		{
//			max = arr[i][j];
//		}
//	}
//	for (int j = 0; j < m; j++)
//	{
//		if (arr[i][j] < min)
//		{
//			min = arr[i][j];
//		}
//	}
//	float sum = 0-min-max;
//	for (int j = 0; j < m; j++)
//	{
//		sum += arr[i][j];
//	}
//	return sum / (m - 2);
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr[105][25] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	float num[105] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		num[i] = aver(arr,i,m);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (num[j] < num[j + 1])
//			{
//				float x = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = x;
//			}
//		}
//	}
//	printf("%.2f", num[0]);
//}



//¼ÆËã½×³Ë
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int x = 1;
//	int s = 1;
//	next1:
//	if (x <= n)
//	{
//		s *= x;
//		x++;
//		if (x <= n)
//		{
//			goto next1;
//		}
//		else
//		{
//			goto next2;
//		}
//	}
//	next2:
//	printf("%d", s);
//}



//ÉâÃâÕ½·ı
//#include<stdio.h>
//int cifang(n)
//{
//	int s = 1;
//	for (int a = 0; a < n; a++)
//	{
//		s *= 2;
//	}
//	return s;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2+5][2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2+5] = { 0 };
//	for (int i = 0; i < cifang(n); i++)
//	{
//		for (int j = 0; j < cifang(n); j++)
//		{
//			arr[i][j] = 1;
//		}
//	}
//	int x = cifang(n / 2);
//	int i = 0;
//	int j = 0;
//	next1:
//	if (x > 1)
//	{
//		int a = i;
//		int b = j;
//		for (i; i < a + cifang(n / 2); i++)
//		{
//			for (j; j < b + cifang(n / 2); j++)
//			{
//				arr[i][j] = 0;
//			}
//		}
//		i = x + 1;
//		j = 0;
//		n /= 2;
//		x = cifang(n / 2);
//
//		if (x > 1)goto next1;
//	}
//next2:
//	if (x > 1)
//	{
//		int a = i;
//		int b = j;
//		for (i; i < a + cifang(n / 2); i++)
//		{
//			for (j; j < b + cifang(n / 2); j++)
//			{
//				arr[i][j] = 0;
//			}
//		}
//		i = 0;
//		j = x + 1;
//		n /= 2;
//		x = cifang(n / 2);
//
//		if (x > 1)goto next2;
//	}
//next3:
//	if (x > 1)
//	{
//		int a = i;
//		int b = j;
//		for (i; i < a + cifang(n / 2); i++)
//		{
//			for (j; j < b + cifang(n / 2); j++)
//			{
//				arr[i][j] = 0;
//			}
//		}
//		i = x + 1;
//		j = x + 1;
//		n /= 2;
//		x = cifang(n / 2);
//
//		if (x > 1)goto next3;
//	}
//
//}