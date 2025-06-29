#define  _CRT_SECURE_NO_WARNINGS 1

//小鱼比可爱
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	while (scanf("%d", &arr[i]) == 1)
//	{
//		if (i == n - 1)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("0 ");
//	for (int i = 1; i < n; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i] > arr[i - j - 1])
//			{
//				count++;
//			}
//		}
//		printf("%d ", count);
//	}
//}



//小鱼的数字游戏
//#include<stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	int k = 0;
//	while (scanf("%d", &arr[i]) !=EOF)
//	{
//		k = i;
//
//		i++;
//	}
//	for (int j = k - 1; j >= 0; j--)
//	{
//		printf("%d ", arr[j]);
//	}
//	
//	
//}



//冰雹猜想
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int x = n;
//	int arr[10000] = { 0 };
//	int k = 0;
//	if (n == 1)
//	{
//		printf("%d", n);
//	}
//	else
//	{
//		for (int i = 0; ; i++)
//		{
//			if (n % 2 == 0)
//			{
//				n = n / 2;
//				arr[i] = n;
//				if (n == 1)
//				{
//					k = i;
//					break;
//				}
//			}
//			else
//			{
//				n = n * 3 + 1;
//				arr[i] = n;
//			}
//		}
//		for (int j = k; j >= 0; j--)
//		{
//			printf("%d ", arr[j]);
//		}
//		printf("%d", x);
//	}
//}



//校门外的树
//#include<stdio.h>
//int main()
//{
//	int l, m;
//	scanf("%d %d", &l, &m);
//	int arr1[100][2] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	int* arr2 = (int*)malloc(sizeof(int) * (l + 5));
//	for (int c = 0; c < l; c++)
//	{
//		arr2[c] = 1;
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (int a = arr1[i][0]; a <= arr1[i][1]; a++)
//		{
//			arr2[a - 1] = 0;
//		}
//	}
//	int sum = 0;
//	for (int b = 0; b < l; b++)
//	{
//		sum = sum + arr2[b];
//	}
//	for (int d = 0; d < m; d++)
//	{
//		if (arr1[d][0] == 0)
//		{
//			sum = sum - 1;
//			break;
//		}
//	}
//	printf("%d", sum+1);
//}



//旗鼓相当的对手
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[1000][3] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[i][0] - arr[j][0] <= 5 && arr[i][0] - arr[j][0] >= -5 && arr[i][1] - arr[j][1] <= 5 && arr[i][1] - arr[j][1] >= -5 && arr[i][2] - arr[j][2] <= 5 && arr[i][2] - arr[j][2] >= -5 && arr[i][0] + arr[i][1] + arr[i][2] - arr[j][0] - arr[j][1] - arr[j][2] <= 10 && arr[i][0] + arr[i][1] + arr[i][2] - arr[j][0] - arr[j][1] - arr[j][2] >= -10)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//}



//工艺品的制作
//#include<stdio.h>
//int main()
//{
//	int w, x, h;
//	int q;
//	int arr[20][20][20] = { 0 };
//	scanf("%d %d %d", &w, &x, &h);
//	scanf("%d", &q);
//	for (int i = 0; i < w; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			for (int k = 0; k < h; k++)
//			{
//				arr[i][j][k] = 1;
//			}
//		}
//	}
//	int arr1[100][6] = { 0 };
//	for (int i = 0; i < q; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int a = 0; a < q; a++)
//	{
//			for (int c = arr1[a][0]; c <= arr1[a][3]; c++)
//			{
//				for (int d = arr1[a][1]; d <= arr1[a][4]; d++)
//				{
//					for (int e = arr1[a][2]; e <= arr1[a][5]; e++)
//					{
//						arr[c-1][d-1][e-1] = 0;
//					}
//				}
//			}
//	}
//	int count = 0;
//	for (int i = 0; i < w; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			for (int k = 0; k < h; k++)
//			{
//				count = count + arr[i][j][k];
//			}
//		}
//	}
//	printf("%d", count);
//}



//买彩票
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[7] = { 0 };
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int arr1[7] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		int arr2[7] = { 0 };
//		int count = 0;
//		for (int j = 0; j < 7; j++)
//		{
//			scanf("%d", &arr2[j]);
//			for (int k = 0; k < 7; k++)
//			{
//				if (arr2[j] == arr[k])
//				{
//					count++;
//					break;
//				}
//			}
//		}
//		for (int a = 6; a >=0; a--)
//		{
//			if (count == 7 - a)
//			{
//				arr1[a] = arr1[a] + 1;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}




//神奇的幻方
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[40][40] = { 0 };
//	arr[0][(n - 1) / 2] = 1;
//	int x, y;
//	x = 0;
//	y = (n - 1) / 2;
//	int sum = 0;
//	for (int i = 2; i <= n*n; i++)
//	{
//		if (x == 0 && y != n - 1)
//		{
//			x = n - 1;
//			y = y + 1;
//			arr[x][y] = i;
//		}
//		else if (y == n - 1 && x != 0)
//		{
//			y = 0;
//			x = x - 1;
//			arr[x][y] = i;
//		}
//		else if (x == 0 && y == n - 1)
//		{
//			x = x + 1;
//			arr[x][y] = i;
//		}
//		else if (x != 0 && y != n - 1)
//		{
//			if (arr[x - 1][y + 1] == 0)
//			{
//				x = x - 1;
//				y = y + 1;
//				arr[x][y] = i;
//			}
//			else
//			{
//				x = x + 1;
//				arr[x][y] = i;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}



//显示屏
//#include<stdio.h>
//int shi(int n)
//{
//	int q = 1;
//	for (int m = 0; m < n; m++)
//	{
//		q = q * 10;
//	}
//	return q;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char arr[5][405] = { '0' };
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = '.';
//		}
//	}
//	int arr1[100] = { 0 };
//	int x = 0;
//	scanf("%d", &x);
//	int y = x;
//	if (x % shi(n) < shi(n-1))
//	{
//		arr1[0] = 0;
//		for (int i = 1; i < n; i++)
//		{
//			arr1[i] = y / shi(n-i);
//			y = y - arr1[i] * shi(n - i);
//		}
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			arr1[i] = y / shi(n);
//			y = y - arr1[i] * shi(n);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			arr[0][i * 4] = 'X';
//			arr[0][i * 4 + 1] = 'X';
//			arr[0][i * 4 + 2] = 'X';
//			arr[1][i * 4] = 'X';
//			arr[1][i * 4 + 2] = 'X';
//			arr[2][i * 4] = 'X';
//			arr[2][i * 4 + 2] = 'X';
//			arr[3][i * 4] = 'X';
//			arr[3][i * 4 + 2] = 'X';
//			arr[4][i * 4] = 'X';
//			arr[4][i * 4 + 1] = 'X';
//			arr[4][i * 4 + 2] = 'X';
//		}
//		else if (arr1[i] == 1)
//		{
//			arr[0][i * 4 + 2] = 'X';
//			arr[1][i * 4 + 2] = 'X';
//			arr[2][i * 4 + 2] = 'X';
//			arr[3][i * 4 + 2] = 'X';
//			arr[4][i * 4 + 2] = 'X';
//		}
//		else if (arr1[i] == 2)
//		{
//			arr[0][i * 4] = 'X';
//			arr[0][i * 4 + 1] = 'X';
//			arr[0][i * 4 + 2] = 'X';
//			arr[1][i * 4 + 2] = 'X';
//			arr[2][i * 4] = 'X';
//			arr[2][i * 4 + 1] = 'X';
//			arr[2][i * 4 + 2] = 'X';
//			arr[3][i * 4] = 'X';
//			arr[4][i * 4] = 'X';
//			arr[4][i * 4 + 1] = 'X';
//			arr[4][i * 4 + 2] = 'X';
//		}
//		else if (arr1[i] == 3)
//		{
//			arr[0][i * 4] = 'X';
//			arr[0][i * 4 + 1] = 'X';
//			arr[0][i * 4 + 2] = 'X';
//			arr[1][i * 4 + 2] = 'X';
//			arr[2][i * 4] = 'X';
//			arr[2][i * 4 + 1] = 'X';
//			arr[2][i * 4 + 2] = 'X';
//			arr[3][i * 4 + 2] = 'X';
//			arr[4][i * 4] = 'X';
//			arr[4][i * 4 + 1] = 'X';
//			arr[4][i * 4 + 2] = 'X';
//		}
//		else if (arr1[i] == 4)
//		{
//			arr[0][i * 4] = 'X';
//			arr[0][i * 4 + 2] = 'X';
//			arr[1][i * 4] = 'X';
//			arr[1][i * 4 + 2] = 'X';
//			arr[2][i * 4] = 'X';
//			arr[2][i * 4 + 1] = 'X';
//			arr[2][i * 4 + 2] = 'X';
//			arr[3][i * 4 + 2] = 'X';
//			arr[4][i * 4 + 2] = 'X';
//		}
//		else if (arr1[i] == 5)
//		{
//			arr[0][i * 4] = 'X';
//			arr[0][i * 4 + 1] = 'X';
//			arr[0][i * 4 + 2] = 'X';
//			arr[1][i * 4] = 'X';
//			arr[2][i * 4] = 'X';
//			arr[2][i * 4 + 1] = 'X';
//			arr[2][i * 4 + 2] = 'X';
//			arr[3][i * 4 + 2] = 'X';
//			arr[4][i * 4] = 'X';
//			arr[4][i * 4 + 1] = 'X';
//			arr[4][i * 4 + 2] = 'X';
//		}
//		else if (arr1[i] == 6)
//		{
//			arr[0][i * 4] = 'X';
//			arr[0][i * 4 + 1] = 'X';
//			arr[0][i * 4 + 2] = 'X';
//			arr[1][i * 4] = 'X';
//			arr[2][i * 4] = 'X';
//			arr[2][i * 4 + 1] = 'X';
//			arr[2][i * 4 + 2] = 'X';
//			arr[3][i * 4] = 'X';
//			arr[3][i * 4 + 2] = 'X';
//			arr[4][i * 4] = 'X';
//			arr[4][i * 4 + 1] = 'X';
//			arr[4][i * 4 + 2] = 'X';
//		}
//		else if (arr1[i] == 7)
//		{
//			arr[0][i * 4] = 'X';
//			arr[0][i * 4 + 1] = 'X';
//			arr[0][i * 4 + 2] = 'X';
//			arr[1][i * 4 + 2] = 'X';
//			arr[2][i * 4 + 2] = 'X';
//			arr[3][i * 4 + 2] = 'X';
//			arr[4][i * 4 + 2] = 'X';
//		}
//		else if (arr1[i] == 8)
//		{
//			arr[0][i * 4] = 'X';
//			arr[0][i * 4 + 1] = 'X';
//			arr[0][i * 4 + 2] = 'X';
//			arr[1][i * 4] = 'X';
//			arr[1][i * 4 + 2] = 'X';
//			arr[2][i * 4] = 'X';
//			arr[2][i * 4 + 1] = 'X';
//			arr[2][i * 4 + 2] = 'X';
//			arr[3][i * 4] = 'X';
//			arr[3][i * 4 + 2] = 'X';
//			arr[4][i * 4] = 'X';
//			arr[4][i * 4 + 1] = 'X';
//			arr[4][i * 4 + 2] = 'X';
//		}
//		else if (arr1[i] == 9)
//		{
//			arr[0][i * 4] = 'X';
//			arr[0][i * 4 + 1] = 'X';
//			arr[0][i * 4 + 2] = 'X';
//			arr[1][i * 4] = 'X';
//			arr[1][i * 4 + 2] = 'X';
//			arr[2][i * 4] = 'X';
//			arr[2][i * 4 + 1] = 'X';
//			arr[2][i * 4 + 2] = 'X';
//			arr[3][i * 4 + 2] = 'X';
//			arr[4][i * 4] = 'X';
//			arr[4][i * 4 + 1] = 'X';
//			arr[4][i * 4 + 2] = 'X';
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 4 * n - 1; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//}



//梦中的统计
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int arr[10] = { 0 };
//	for (int i = m; i <= n; i++)
//	{
//		int k = i;
//		for (int j = 0; j < 15; j++)
//		{
//			int x = k % 10;
//			k = k / 10;
//			arr[x] = arr[x] + 1;
//			if (k == 0)
//			{
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}



//珠心算
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[105] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int count = 0;
//	int i, j, k;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (j == i)
//			{
//				continue;
//			}
//			for (k = 0; k < n; k++)
//			{
//				if (k == j || k == i)
//				{
//					continue;
//				}
//				if (arr[i] == arr[j] + arr[k])
//				{
//					count++;
//				}
//			}
//		}
//	}
//	printf("%d", count/2);
//}


//爱与愁
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr[10000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int arr1[2] = { 0 };
//	int sum1 = 0;
//	int sum2 = 100000;
//	for (int i = 0; i < n; i++)
//	{
//		if (i + 2 >= n)
//		{
//			break;
//		}
//		for (int j = i; j < i + m; j++)
//		{
//			if (i % 2 == 0)
//			{
//				arr1[0] += arr[j];
//			}
//			else
//			{
//				arr1[1] += arr[j];
//			}
//		}
//		if (arr1[1] != 0)
//		{
//			if (arr1[0] > arr1[1])
//			{
//				sum1 = arr1[1];
//			}
//			else
//			{
//				sum1 = arr1[0];
//			}
//		}
//		else
//		{
//			sum1 = arr1[0];
//		}
//		if (sum1 < sum2)
//		{
//			sum2 = sum1;
//		}
//		if (i % 2 == 0)
//		{
//			arr1[1] = 0;
//		}
//		else
//		{
//			arr1[0] = 0;
//		}
//	}
//	printf("%d", sum2);
//}



//掷色子
//#include<stdio.h>
//int main()
//{
//	int s1, s2, s3;
//	scanf("%d %d %d", &s1, &s2, &s3);
//	int arr[20 * 20 * 40 + 5] = { 0 };
//	int i = 0;
//		for (int a = 1; a <= s1; a++)
//		{
//			for (int b = 1; b <= s2; b++)
//			{
//				for (int c = 1; c <= s3; c++)
//				{
//					arr[i] = a + b + c;
//					i++;
//				}
//			}
//		}
//
//	for (int i = 0; i < s1 * s2 * s3; i++)
//	{
//		for (int j = 0; j < s1 * s2 * s3 - i-1; j++)
//		{
//			if (arr[j] == 0)
//			{
//				break;
//			}
//			if (arr[j] > arr[j + 1])
//			{
//				int n = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = n;
//			}
//		}
//	}
//	int count = 1;
//	int arr1[20 * 20 * 40] = { 0 };
//	int j = 0;
//	for (int i = 0; i < s1 * s2 * s3; i++)
//	{
//		if (arr[i] == 0)
//		{
//			break;
//		}
//		if (arr[i] == arr[i + 1])
//		{
//			count++;
//		}
//		else
//		{
//			arr1[j] = count;
//			arr1[j + 1] = arr[i];
//			j++;
//			j++;
//			count = 1;
//		}
//	}
//	for (int i = 0; i < j; i=i+2)
//	{
//		for (int k = 0; k < j - i - 1; k=k+2)
//		{
//			if (arr1[k] < arr1[k + 2])
//			{
//				int a = arr1[k];
//				arr1[k] = arr1[k + 2];
//				arr1[k + 2] = a;
//				int b = arr1[k+1];
//				arr1[k+1] = arr1[k + 3];
//				arr1[k + 3] = a;
//			}
//		}
//	}
//	printf("%d", arr1[1]);
//}



//开灯
//#include<stdio.h>
//int main()
//{
//	float arr1[3000] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; scanf("%f", &arr1[i]) != EOF; i++)
//	{
//		if ((i + 1) / 2 == n)break;
//	}
//	int arr2[] = {0};
//	int j = 0;
//	for (int i = 0; i < 3000; i += 2)
//	{
//		if (arr1[i] == 0)break;
//		float a= arr1[i] * arr1[i + 1];
//		arr2[j] = (int)a;
//		j++;
//	}
//	for (int i = 0; i < j - 1; i++)
//	{
//		for (int k = 0; k < j - 1 - i - 1; k++)
//		{
//			if (arr2[k] < arr2[k + 1])
//			{
//				int n = arr2[k];
//				arr2[k] = arr2[k + 1];
//				arr2[k + 1] = n;
//			}
//		}
//	}
//	int arr3[] = { 0 };
//	for (int i = 0; i < 3000; i += 2)
//	{
//		float a = arr1[i] * arr1[i + 1];
//		for (int j = arr1[i]; j <=(int)a; j++)
//		{
//			if (arr3[j] != 1)
//			{
//				arr3[j] = 1;
//			}
//			else
//			{
//				arr3[j] = 0;
//			}
//		}
//	}
//	for (int i = 0; i < arr2[0]; i++)
//	{
//		if (arr3[i] == 1)
//		{
//			printf("%d\n", i + 1);
//		}
//	}
//
//
//}



//蛇形方正
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[9][9] = { 0 };
//	int i = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (i == 0 && j == 3)
//			{
//				for(i=)
//			}
//		}
//	
//}


//杨辉三角
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[20][20] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j || j == 0)
//			{
//				arr[i][j] = 1;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i][j] != 1 && i > j)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//}



//插火把
//#include<stdio.h>
//int main()
//{
//	int n, m, k;
//	int arr[100][100] = { 0 };
//	scanf("%d %d %d", &n, &m, &k);
//	int arr1[100][100] = { 0 };
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//			scanf("%d %d",&x,&y );
//			x = x - 1;
//			y = y - 1;
//			arr[x][y] = 1;
//			arr[x - 1][y] = 1; arr[x-1][y-1] = 1; arr[x-1][y+1] = 1;
//			arr[x-2][y] = 1;
//			arr[x+1][y] = 1; arr[x+1][y-1] = 1; arr[x+1][y+1] = 1;
//			arr[x+2][y] = 1;
//			arr[x][y-1] = 1; arr[x][y-2] = 1; arr[x][y+1] = 1; arr[x][y+2] = 1;
//	}
//	int arr2[100][100] = { 0 };
//	for (int i = 0; i < k; i++)
//	{
//		int x, y;
//			scanf("%d %d",&x,&y );
//			for (int a = x - 3; a <= x + 1; a++)
//			{
//				for (int b = y - 3; b <= y + 1; b++)
//				{
//					arr[a][b] = 1;
//				}
//			}
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			sum += arr[i][j];
//		}
//		
//	}
//	int count = n * n - sum;
//	printf("%d", count);
//}



//压缩技术
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[200 * 200] = { 0 };
//	for (int i = 0; scanf("%d", &arr[i]) != EOF; i++)
//	{
//	}
//	int arr1[200][200] = { 0 };
//	int x = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (x % 2 == 0)
//			{
//				if (j + arr[x] < n)
//				{
//					for (int a = j; a < j + arr[x]; a++)
//					{
//						arr1[i][a] = 0;
//					}
//				}
//				else
//				{
//					for (int a = j; a < n; a++)
//					{
//						arr1[i][a] = 0;
//					}
//					i++;
//					j = 0;
//						for (int a = j; a < j + arr[x] - n; a++)
//						{
//							arr1[i][a] = 0;
//						}
//				}
//				x++;
//			}
//			else
//			{
//				if (j + arr[x] < n)
//				{
//					for (int a = j; a < j + arr[x]; a++)
//					{
//						arr1[i][a] = 1;
//					}
//				}
//				else
//				{
//					for (int a = j; a < n; a++)
//					{
//						arr1[i][a] = 0;
//					}
//					i++;
//					j = 0;
//					for (int a = j; a < j + arr[x] - n; a++)
//					{
//						arr1[i][a] = 1;
//					}
//				}
//				x++;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d", arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//}



//方块转化
//#include<stdio.h>
//int panduan(char **arr2, char **arr3, int n )
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr3[i][j] != arr2[i][j])
//				return 0;
//		}
//		return 1;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char arr1[15][15] = { 0 };
//	int count = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%c", &arr1[i][j]);
//		}
//	}
//	char arr2[15][15] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%c", &arr2[i][j]);
//		}
//	}
//	char arr3[15][15] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr3[i][j] = arr1[j][n - i - 1];
//		}
//	}
//	if (panduan(arr2,arr3,n))
//	{
//		printf("%d",count);
//		return 0;
//	}
//	else
//	{
//		count++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr3[i][j] = arr1[n - 1 - i][n - 1 - j];
//		}
//	}
//	if (panduan(arr2, arr3,n))
//	{
//		printf("%d", count);
//		return 0;
//	}
//	else
//	{
//		count++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr3[i][j] = arr1[n-1-j][i];
//		}
//	}
//	if (panduan(arr2, arr3, n))
//	{
//		printf("%d", count);
//		return 0;
//	}
//	else
//	{
//		count++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr3[i][j] = arr1[i][n - 1 - j];
//		}
//	}
//	if (panduan(arr2, arr3, n))
//	{
//		printf("%d", count);
//		return 0;
//	}
//	else
//	{
//		count++;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr3[i][j] = arr1[j][n - i - 1];
//		}
//	}
//	if (panduan(arr2, arr3, n))
//	{
//		printf("%d", 5);
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr3[i][j] = arr1[n - 1 - i][n - 1 - j];
//		}
//	}
//	if (panduan(arr2, arr3, n))
//	{
//		printf("%d", 5);
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr3[i][j] = arr1[n - 1 - j][i];
//		}
//	}
//	if (panduan(arr2, arr3, n))
//	{
//		printf("%d", 5);
//		return 0;
//	}
//	count = 6;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			arr3[i][j] = arr1[i][j];
//		}
//	}
//	if (panduan(arr2, arr3, n))
//	{
//		printf("%d", count);
//		return 0;
//	}
//	else
//	{
//		count++;
//		printf("%d", count);
//	}
//	
//}


//自动修正
//#include<stdio.h>
//int main()
//{
//	char arr[105] = { '0' };
//	for (int i = 0; arr[i - 1] != '\n'; i++)
//	{
//		scanf("%c", &arr[i]);
//	}
//	for (int i = 0; i < 105; i++)
//	{
//		if (arr[i] == '\n')
//		{
//			break;
//		}
//		if (arr[i] >= 'a' && arr[i] <= 'z')
//		{
//			arr[i] = arr[i] + 'A' - 'a';
//		}
//		else
//		{
//			continue;
//		}
//	}
//	for (int i = 0; 1; i++)
//	{
//		if (arr[i] == '\n')
//		{
//			break;
//		}
//		printf("%c", arr[i]);
//	}
//
//}



//凯撒密码
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char arr[100] = { '0' };
//	int x = 'z' - 'a';
//	char a;
//	scanf("%c", &a);
//	for (int i = 0; ; i++)
//	{
//		scanf("%c", &arr[i]);
//		if (arr[i] == '\n')break;
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] == '\n')break;
//		int y = arr[i] - 'a';
//		if (y+n > x)
//		{
//			arr[i] = y + n - x;
//		}
//		else
//		{
//			arr[i] = arr[i] + n;
//		}
//	}
//	for (int i = 0; i<100; i++)
//	{
//		if (arr[i] == '\n')break;
//		printf("%c", arr[i]);
//	}
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int n, i, j, k;
//    char ch[100];
//    scanf("%d %s", &n, ch);
//    int l = strlen(ch);
//    for (i = 0; i < l; i++)
//    {
//        ch[i] = ((ch[i] - 'a') + n) % 26 + ('a');
//    }
//    puts(ch);
//    return 0;
//}

