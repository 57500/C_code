#define  _CRT_SECURE_NO_WARNINGS 1
//找最小值
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int arr[100] = { 0 };
//	int x = 0;
//	while (i<n&&scanf("%d", &x) == 1)
//	{
//		arr[i] = x;
//		i++;
//	}
//	int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", min);
//	return 0;
//}


//分类平均
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	int s = 0;
//	int sa = 0;
//	int sb = 0;
//	scanf("%d %d", &n, &k);
//	for (i = n; i > 0; i--)
//	{
//		if (i % k == 0)
//		{
//			s = i;
//			break;
//		}
//	}
//	int j = 0;
//	for (j = 1; j <= (float)(s / k); j++)
//	{
//		sa = sa + k * j;
//	}
//	float aa = 0;
//	aa = (float)sa / (float)(s / k);
//	float ab = 0;
//	sb = ((1 + n) * n) / 2;
//	ab = (float)(sb - sa) / (float)(n - s / k);
//	printf("%.1f %.1f\n", aa, ab);
//}



//一锤之尺
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int t = 1;
//	scanf("%d", &a);
//	while (a != 1)
//	{
//		a = a / 2;
//		t++;
//	}
//	printf("%d\n", t);
//	return 0;
//}



//数字直角三角形
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int count = 0;
//	int f = 0;
//	sum = (1 + n) * n / 2;
//	for (i = 1; i <=sum ; i++)
//	{
//		if (i < 10 )
//		{
//			printf("0%d", i);
//		}
//		else if (i >= 10)
//		{
//			printf("%d", i);
//		}
//		
//		if ((i - f) % (n-count) == 0)
//		{
//			f = f + n - count;
//			printf("\n");
//			count++;
//		}
//	}
//	return 0;
//}



//阶乘之和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int s = 0;
//	unsigned long long arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < 50; i++)
//	{
//		arr[i] = 1;
//	}
//	unsigned long long ss = 0;
//	scanf("%d", &n);
//
//	for (i =0 ; i < n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i+1; j++)
//		{
//			
//			arr[i] = arr[i] * j;
//		}
//		ss = ss + arr[i];
//	}
//	printf("%d\n", ss);
//	return 0;
//
//}





//01迷宫
//#include<stdio.h>
//int add(int arr2,int* n)
//{
//	int num = 0;
//	int* i = 0;
//	int* j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			num = num + arr2[i][j];
//		}
//	}
//	return num;
//}
//int xs(int arr1,int arr2,int* a,int* b,int *num2,int n)
//{
//	num2 = add(arr2, n);
//	
//	if (arr1[a - 1][b - 1] == 1)
//	{
//		arr2[a - 1][b - 1] = 1;
//		if (arr1[a - 1][b] == 0)
//		{
//			arr2[a - 2][b - 1] = 1;
//		}
//		if (arr1[a - 1][b - 2] == 0)
//		{
//			arr2[a - 1][b - 2] = 1;
//		}
//		if (arr1[a - 1][b] == 0)
//		{
//			arr2[a - 1][b] = 1;
//		}
//		if (arr1[a][b - 1] == 0)
//		{
//			arr2[a][b - 1] = 1;
//		}
//
//	}
//	else if (arr1[a - 1][b - 1] == 0)
//	{
//		arr2[a - 1][b - 1] = 1;
//		if (arr1[a - 1][b] == 1)
//		{
//			arr2[a - 2][b - 1] = 1;
//		}
//		if (arr1[a - 1][b - 2] == 1)
//		{
//			arr2[a - 1][b - 2] = 1;
//		}
//		if (arr1[a - 1][b] == 1)
//		{
//			arr2[a - 1][b] = 1;
//		}
//		if (arr1[a][b - 1] == 1)
//		{
//			arr2[a][b - 1] = 1;
//		}
//
//	}
//	if (arr2[a - 2][b - 1] == 1)
//	{
//		xs(arr1, arr2, a - 1, b, &num2, n);
//	}
//	if (arr2[a - 1][b - 2] == 1)
//	{
//		xs(arr1, arr2, a , b-1, &num2, n);
//	}
//	if (arr2[a -1][b ] == 1)
//	{
//		xs(arr1, arr2, a , b+1, &num2, n);
//	}
//	if (arr2[a ][b - 1] == 1)
//	{
//		xs(arr1, arr2, a +1, b, &num2, n);
//	}
//	if (num2 == add(arr2, n))
//	{
//		return num2;
//	}
//}
//int main()
//{
//	int n, m;
//	int num2;
//	scanf("%d %d", &n, &m);
//	int arr1[1000][1000];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", arr1[i][j]);
//		}
//	}
//	int arr2[1000][1000];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr2[i][j] = 0;
//		}
//	}
//	int a, b,count;
//	scanf("%d %d", &a, &b);
//	num2=xs(arr1, arr2, a, b,&num2,n);
//	printf("%d\n", num2);
//
//}

//#include<stdio.h>
//
//int weishu(int i, int count)
//{
//	int j = 0;
//	for (j = 0; j <= 6;)
//}
//int main()
//{
//	int n, x;
//	scanf("%d %d", &n, &x);
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//
//	}
//	printf("%d\n", count);
//	return 0;
//
//}

//计数问题
//#include<stdio.h>
//int zhi(int j)
//{
//	int k;
//	int num = 1;
//	for (k = 1; k <= j; k++)
//	{
//		num = num * 10;
//	}
//	return num;
//}
//
//int main()
//{
//	int n, x;
//	scanf("%d %d", &n, &x);
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		// for (int j = 0; j <= 6; j++)
//		// {
//		//  if ((i / zhi(j)) % 10 == x)
//		//  {
//		//      count++;
//		//     }
//		// }
//		int t = i;
//		while (t != 0)
//		{
//			if (t % 10 == x) count++;
//			t /= 10;
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}


//级数求和
//#include<stdio.h>
//int main()
//{
//	int k;
//	double s = 0;
//	int n = 1;
//	scanf("%d", &k);
//	for (n = 1; s <= k; n++)
//	{
//		s = s + 1 / (float)n;
//	}
//
//	printf("%d\n", n-1);
//	return 0;
//}



//发金币
//#include<stdio.h>
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int count = 0;
//	int i = 0;
//	for (i = 1;count<k;i++)
//	{
//		count = count + i;
//	}
//	int m = 0;
//	for (int j = 1; j <= i-1; j++)
//	{
//		
//		m = m + j * j ;
//	}
//	int n = 0;
//	n = m - (count - k) * (i - 1);
//	printf("%d", n);
//}



//数列求和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//}



//质数
//#include<stdio.h>
//int zhishu(int i)
//{
//	for (int j = 2; j <= i / 2; j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int l = 0;
//	scanf("%d", &l);
//	int count=0;
//	int n = 0;
//	int i;
//	for (i = 2; 1; i++)
//	{
//		if ((n+i) > l)
//			break;
//		count += zhishu(i);
//
//		if (zhishu(i))
//		{
//			n += i;
//			printf("%d\n", i);
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}



//回文质数
//#include<stdio.h>
//#include<string.h>
//int zhishu(int i)
//{
//	for (int j = 2; j <= i / 2; j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
////int add(int arr,int i)
////{
////	int carry = 0;
////	int len = strlen(i);
////	for (int* q = 1; q <= len; q++)
////	{
////		int m = arr[q] + 1;
////		arr[q] = m % 10;
////		if (m <= 10)
////		{
////			break;
////		}
////	}
////	return add;
////}
//huiwen(int arr,int i)
//{
//	int count = 0;
//	if (strlen(i) % 2 == 0)
//	{
//		int q = 0;
//		int p = strlen(i) - q - 2;
//		for (int *q=0; q <= i / 2; q++)
//		{
//
//			if (arr[q] == arr[q + p])
//			{
//				count++;
//			}
//		}
//		if (count == i / 2)
//		{
//			printf("%d\n", arr);
//		}
//	}
//	else if (strlen(i) == 1)
//	{
//		printf("%d\n", arr);
//	}
//	else
//	{
//		int q = 0;
//		int p = strlen(i) - q - 2;
//		for (int* q = 0; q < i / 2; q++)
//		{
//
//			if (arr[q] == arr[q + p])
//			{
//				count++;
//			}
//		}
//		if (count == i / 2)
//		{
//			printf("%d\n", arr);
//		}
//	}
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	long long i = 1;
//	int arr[100] = { 0 };
//	for (i = a; i <= b; i++)
//	{
//		int k = i;
//		if (zhishu(i))
//		{
//			for (int j = 0; j <= strlen(i); j++)
//			{
//				arr[j] = k % 10;
//				k = k / 10;
//			}
//			if (zhishu(i))
//			{
//				huiwen(arr, i);
//			}
//		}
//	}
//
//}

//#include <stdio.h>
//#include <math.h>
//
//class binInt
//{
//public:
//	binInt();
//	void set(int n);
//	int get();
//	int getLenth();
//	void invert();           // invert the num[] and change to num[]
//	int checkhuiwen();
//	int checksushu();
//	void madehuiwen(int mode);	// 1 is HUiwen include middle num，0 is mirror huiwen
//private:
//	int number;		// save num mode
//	int num[20];	// save num[] mode
//	int length;		// the length is real length
//	void shuzuhua();// let the num mode to num[]mode
//	void shuzihua();// let the num[] mode to num mode
//};
//binInt::binInt()
//{
//	number = 0;
//	length = 0;
//}
//void binInt::set(int n)
//{
//	number = n;
//	length = 0;
//	shuzuhua();
//}
//int binInt::get()
//{
//	return number;
//}
//int binInt::getLenth()
//{
//	return length;
//}
//void binInt::invert()
//{
//	for (int s = 0; s < length / 2; s++)
//	{
//		int temp = num[s];
//		num[s] = num[length - 1 - s];
//		num[length - 1 - s] = temp;
//	}
//	shuzihua();
//}
//int binInt::checkhuiwen()
//{
//	for (int s = 0; s < length; s++)
//	{
//		if (num[s] != num[length - 1 - s])
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int binInt::checksushu()
//{
//	for (int s = 2; s <= sqrt(number); s++)
//	{
//		if (number % s == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//void binInt::shuzuhua()
//{
//	int n = number;
//	for (int s = 0; ; s++)
//	{
//		if (n == 0)
//		{
//			break;
//		}
//		int temp;
//		temp = n % 10;
//		length++;
//		num[s] = temp;
//		n /= 10;
//	}
//	invert();
//}
//void binInt::shuzihua()
//{
//	number = 0;
//	for (int s = 1, len = 0; len < length; s *= 10, len++)
//	{
//		number += num[len] * s;
//	}
//}
//void binInt::madehuiwen(int mode)
//{
//	if (mode == 0)
//	{
//		length *= 2;
//		for (int s = 0; s < length / 2; s++)
//		{
//			num[length - 1 - s] = num[s];
//		}
//	}
//	if (mode == 1)
//	{
//		length *= 2;
//		length--;
//		for (int s = 0; s < length / 2; s++)
//		{
//			num[length - 1 - s] = num[s];
//		}
//	}
//	shuzihua();
//}
//
//int main(void)
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	binInt num;
//	for (int s = 1; true; s *= 10)
//	{
//		// first run the 1 mode huiwen
//		int numLength = -1;
//		for (int u = s; true; u++)
//		{
//			num.set(u);
//			if (numLength == -1)
//				numLength = num.getLenth();
//			if (numLength != -1 && numLength < num.getLenth())
//				break;
//			num.madehuiwen(1);
//			if (num.get() > b)
//				return 0;
//			if (num.checksushu() == 1 && num.get() >= a)
//			{
//				printf("%d\n", num.get());
//			}
//		}
//		numLength = -1;
//		// Second run the 0 mode huiwen
//		for (int u = s; true; u++)
//		{
//			num.set(u);
//			if (numLength == -1)
//				numLength = num.getLenth();
//			if (numLength != -1 && numLength < num.getLenth())
//				break;
//			num.madehuiwen(0);
//			if (num.get() > b)
//				return 0;
//			if (num.checksushu() == 1 && num.get() >= a)
//			{
//				printf("%d\n", num.get());
//			}
//		}
//	}
//
//	return 0;
//}
//



//回文质数
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int zhishu(int i)
//{
//	int n = sqrt(i);
//	for (int k = 3; k <= n; k++)
//	{
//		if (i % k == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int huiwen(char *arr,int len)
//{
//	int p = 0;
//	int count = 0;
//	if (len == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		int q = len - 1 - p;
//
//		for (p = 0; p < q; p++)
//		{
//
//			if (arr[p] != arr[q])
//			{
//				return 0;
//			}
//			else
//			{
//				count++;
//			}
//			q--;
//		}
//		if (count == len / 2)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a % 2 == 0)
//	{
//		a++;
//	}
//	int i = 0;
//	char arr[15] = "";
//	for (i = a; i <= b; i=i+2)
//	{
//		int k = i;
//		int j = 0;
//		sprintf(arr, "%d", i);
//		int len = strlen(arr);
//		for (j = 0; j < len; j++)
//		{
//			arr[j] = k % 10;
//			k = k / 10;
//		}
//		if (huiwen(arr,len))
//		{
//
//			if (zhishu(i))
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//}



//小玉在游泳//
//#include<stdio.h>
//int main()
//{
//	double s;
//	scanf("%lf", &s);
//	double x = 0;
//	int count = 0;
//	double v = 2;
//	for (int i = 0; x < s; i++)
//	{
//		x = x + v;
//		v = v * 0.98;
//		count++;
//	}
//	printf("%d\n", count);
//}



//数字反转
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	char arr[11] = { 0 };
//	sprintf(arr, "%d", x);
//	int len = strlen(arr);
//	int carry = 0;
//	if (x > 0)
//	{
//		for (int i = 0; i < len; i++)
//		{
//			int y = x % 10;
//			x = x / 10;
//			if (carry==0&&y == 0)
//			{
//				continue;
//			}
//			printf("%d", y);
//			carry++;
//		}
//	}
//	else if (x == 0)
//	{
//		printf("%d", x);
//	}
//	else
//	{
//		printf("-");
//		int k = -x;
//		carry = 0;
//		for (int i = 0; i < len-1; i++)
//		{
//
//			int y = k % 10;
//			k = k / 10;
//			if (carry == 0 && y == 0)
//			{
//				continue;
//			}
//			printf("%d", y);
//			carry++;
//		}
//	}
//}



//月落乌啼算钱
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double x = sqrt(5);
//	double c = 1;
//	double d = 1;
//	for (int i = 0; i < n; i++)
//	{
//		c = c * (((float)1 + x)/(float)2);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		d = d * (((float)1 - x) / (float)2);
//	}
//	double f = 0;
//	f = (c - d) / x;
//	printf("%.2f\n", f);
//	return 0;
//}



//求极值
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	while (scanf("%d", &arr[i])==1)
//	{
//		if (i == n - 1)
//		{
//			break;
//		}
//		i++;
//
//	}
//	for (int j = 0; j < n; j++)
//	{
//
//		for (i = 0; i < n-j-1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int k = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = k;
//			}
//		}
//	}
//	int x = arr[n - 1] - arr[0];
//	printf("%d\n", x);
//}


//最长连号
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	int i = 0;
//	while (scanf("%d", &arr[i]) == 1)
//	{
//		if (i == n - 1)
//		{
//			break;
//		}
//		i++;
//	}
//	int count = 1;
//	int arr1[10000] = { 1 };
//	for (i = 0; i < n; i++)
//	{
//		count = 1;
//		for (int j = i; j < n; j++)
//		{
//			if (arr[j] < arr[j + 1]&&arr[j+1]-arr[j]==1)
//			{
//				count++;
//				arr1[i] = count;
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i-1; j++)
//		{
//			if (arr1[j] > arr1[j + 1])
//			{
//				int k = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = k;
//			}
//		}
//	}
//	int x = arr1[n - 1];
//	printf("%d\n", x);
//}


////质因数分解
//#include<stdio.h>
//#include<math.h>
////
////int zhishu(int i)
////{
////	int y = sqrt(i);
////	for (int j = 2; j <= y; j++)
////	{
////		if (i % j == 0)
////		{
////			return 0;
////		}
////	}
////	return 1;
////	
////}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int k = sqrt(n);
//	int x = 0;
//	//for (int i = n; i>=1; i--)
//	//{
//	//	if (n % i == 0 && zhishu(i))
//	//	{
//	//		x = i;
//	//		break;
//	//	}
//	//}
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			x = n / i;
//			break;
//		}
//	}
//	printf("%d\n", x);
//}





//求三角形
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = n*i-n+1; j <= n*i; j++)
//		{
//			if (j < 10)
//			{
//				printf("0%d", j);
//			}
//			else
//			{
//				printf("%d", j);
//			}
//		}
//		printf("\n");
//	}
//	int x = 1;
//	printf("\n");
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n - i; j++)
//		{
//			printf("  ");
//		}
//		for (int k = x; k < x + i; k++)
//		{
//			if (k < 10)
//			{
//				printf("0%d", k);
//			}
//			else
//			{
//				printf("%d", k);
//			}
//		}
//		printf("\n");
//		x = x + i;
//	}
//}



//打分
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	while (scanf("%d", &arr[i]) == 1)
//	{
//		if (i==n-1)
//		{
//			break;
//		}
//		i++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int k = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = k;
//
//			}
//		}
//	}
//	float sum = 0;
//	for (int a = 1; a <= n - 2; a++)
//	{
//		sum = sum + arr[a];
//	}
//	float x = sum / (n - 2);
//	printf("%.2f", x);
//}



//Davor
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int x, k;
//
//	for (x = 100; x >= 1; x--)
//	{
//		if ((n - 7 * 52 * x) >= 0)
//		{
//			if ((n - 7 * 52 * x) % (21 * 52) == 0&& (n - 7 * 52 * x) / (21 * 52)!=0)
//			{
//				k = (n - 7 * 52 * x) / (21 * 52);
//				break;
//			}
//		}
//
//	}
//	printf("%d\n", x);
//	printf("%d\n", k);
//
//}



//津津的储蓄计划
//#include<stdio.h>
//int main()
//{
//	int arr[12] = { 0 };
//	int i = 0;
//	while (scanf("%d", &arr[i]) == 1)
//	{
//		if (i == 11)
//		{
//			break;
//		}
//		i++;
//	}
//	int yv = 300;
//	int cun = 0;
//	int x;
//	for (int i = 0; i < 12; i++)
//	{
//		yv = yv - arr[i];
//		if (yv < 0)
//		{
//			x = i + 1;
//			printf("-%d", x);
//			return 0;
//		}
//		if (yv % 100 >= 1)
//		{
//			int k = yv / 100;
//			cun = cun +  k* 100;
//			yv = yv - k * 100;
//		}
//		yv = yv + 300;
//	}
//	int li = cun /5;
//	yv = yv + li+cun-300;
//	printf("%d", yv);
//}