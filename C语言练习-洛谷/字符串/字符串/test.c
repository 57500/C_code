#define  _CRT_SECURE_NO_WARNINGS 1

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



//笨小猴
//#include<stdio.h>
//int main()
//{
//	char arr[105] = { '0' };
//	int x = 0;
//	for (x = 0; 1; x++)
//	{
//		scanf("%c", &arr[x]);
//		if (arr[x] == '\n')break;
//	}
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < x - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				char y = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = y;
//			}
//		}
//	}
//	int z = 0;
//	int t = 0;
//	int arr1[26] = { 0 };
//	for (int i = 0; i < x; i++)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			arr1[z] += 1;
//			t = z;;
//		}
//		else
//		{
//			z++;
//		}
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j < 26-1-i; j++)
//		{
//			if (arr1[j] < arr1[j + 1])
//			{
//				char y = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = y;
//			}
//		}
//	}
//	int m = arr1[0] - arr1[t];
//	if (m == 0 || m == 1)
//	{
//		printf("No Answer\n");
//		printf("0");
//		return 0;
//	}
//
//	for (int i = 2; i < m; i++)
//	{
//		if (m % i == 0)
//		{
//			printf("No Answer\n");
//			printf("0");
//			return 0;
//		}
//	}
//	printf("Lucky Word\n");
//	printf("%d", m);
//}



//口算题
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char a;
//	scanf("%c", &a);
//	char arr[55][4] = { '0' };
//	arr[0][0] = "a"; arr[0][1] = "64"; arr[0][2] = "46";
//    
//	char fu;
//	for (int i = 0; i < n; i++)
//	{
//
//			if (arr[i][0] == 'a' || arr[i][0] == 'b' || arr[i][0] == 'c')
//			{
//				if (arr[i][0] == 'a')
//				{
//					fu = 'a';
//					char x = arr[i][1] + arr[i][2];
//					printf("%s+%s=%s", arr[i][1], arr[i][2], x);
//					printf("\n");
//
//				}
//				else if (arr[i][0] == 'b')
//				{
//					fu = 'b';
//					printf("%c-%c=%c", arr[i][1], arr[i][2], arr[i][1] - arr[i][2]);
//					printf("\n");
//
//				}
//				else
//				{
//					fu = 'c';
//					printf("%c*%c=%c", arr[i][1], arr[i][2], arr[i][1] * arr[i][2]);
//					printf("\n");
//
//				}
//			}
//			else
//			{
//				if (fu == 'a')
//				{
//					fu = 'a';
//					printf("%c+%c=%c", arr[i][0], arr[i][1], arr[i][0] + arr[i][1]);
//					printf("\n");
//				}
//				else if (fu == 'b')
//				{
//					fu = 'b';
//					printf("%c-%c=%c", arr[i][0], arr[i][1], arr[i][0] - arr[i][1]);
//					printf("\n");
//
//				}
//				else
//				{
//					fu = 'c';
//					printf("%c*%c=%c", arr[i][0], arr[i][1], arr[i][0] * arr[i][1]);
//					printf("\n");
//
//				}
//			}
//
//	
//	}
//}



//标题统计
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100] = "";
//	for (int i = 0; 1; i++)
//	{
//		scanf("%c", &arr[i]);
//		if (arr[i] == '\n')break;
//	}
//	int m = strlen(arr);
//	for (int i = 0; 1; i++)
//	{
//		if (arr[i] == ' ' || arr[i] == '\n')m--;
//		if (arr[i] == '\n')break;
//	}
//	printf("%d", m);
//	return 0;
//}



//文字处理软件
//#include<stdio.h>
//int main()
//{
//	int q;
//	scanf("%d", &q);
//	fflush(stdin);
//	char arr[10000] = "";
//	scanf("%s", &arr);
//	char arr1[10000] = "";
//	char arr2[10000] = "";
//	for (int i = 0; i < q; i++)
//	{
//		scanf("%s", &arr1);
//		switch (arr1[0])
//		{
//		case '1':
//			printf("%s", arr);
//			for (int j = 2; arr1[j] != '\0'; j++)
//			{
//				printf("%c", arr1);
//			}
//			printf("\n");
//			strcat(arr, arr1);
//		case '2':
//			for (int a = 0; a < arr1[4] - '0'; a++)
//			{
//				arr2[a] = arr[a + arr1[2] - '0'];
//				printf("%c", arr2[a]);
//				arr[a] == arr2[a];
//			}
//			printf("\n");
//		case '3':
//		{
//			int l = strlen(arr1);
//			int m = strlen(arr);
//			int b = 4;
//			for (int a = arr1[2] - '0'; a <= arr1[2] - '0' + m-arr1[2]-'0'; a++)
//			{
//				arr[a + l - 4] = arr[a];
//			}
//			for (int a = arr1[2] - '0'; a <= arr1[2] - '0' + l - 4; a++)
//			{
//				arr[a] = arr1[b];
//				b++;
//			}
//			printf("%s\n", arr);
//		}
//		case '4':
//		{
//			int l = strlen(arr);
//			int m = strlen(arr1);
//			int a = 0;
//			for (a = 0; a < l; a++)
//			{
//				int c = 2;
//				for (int b = a; b <= a + m - 2; b++)
//				{
//					if (arr[b] != arr1[c])
//					{
//						break;
//					}
//					else
//					{
//						c++;
//					}
//				}
//				if (c == m - 1)
//				{
//					printf("%d\n", a);
//					break;
//				}
//			}
//			if (a == l)
//			{
//				printf("-1\n");
//			}
//		}
//
//		}
//
//		
//	}
//}



////查找单词
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[15] = "";
//	scanf("%s", &arr1);
//	char arr2[1000000] = "";
//	scanf("%s", &arr2);
//	if (arr1[0] < 'a')
//	{
//		char arr3[15];
//		int count = 0;
//		strcpy(arr3,&arr1[1]);
//		int l = strlen(arr3);
//		char* ans = strstr(arr2, arr3);
//		if (arr2[(int)(ans - arr2) - 1] == arr1[0] || arr2[(int)(ans - arr2) - 1] == arr1[0] + 26 && arr2[(int)(ans - arr2) + l - 1] < 'A' && arr2[(int)(ans - arr2) + l - 1] > 'z')
//		{
//			count++;
//		}
//	}
//}


//手机
//#include<stdio.h>
//int main()
//{
//	char arr[205] = "";
//	for (int i = 0; 1; i++)
//	{
//		scanf("%c", &arr[i]);
//		if (arr[i] == '\n')break;
//	}
//	int count = 0;
//	for (int i = 0; arr[i]!='\n'; i++)
//	{
//		if (arr[i] <= 'o'&&arr[i]>='a')
//		{
//			if ((arr[i] - 'a' + 1) % 3 == 0)
//			{
//				count += 3;
//			}
//			else
//			{
//				count = count + (arr[i] - 'a' + 1) % 3;
//			}
//		}
//		else if (arr[i] == ' ')
//		{
//			count = count + 1;
//		}
//		else if (arr[i] > 'o' && arr[i] <= 's')
//		{
//			if ((arr[i] - 'p' + 1) % 4 == 0)
//			{
//				count += 4;
//			}
//			else
//			{
//				count = count + (arr[i] - 'p' + 1) % 4;
//			}
//		}
//		else if (arr[i] <= 'v' && arr[i] >= 't')
//		{
//			if ((arr[i] - 't' + 1) % 3 == 0)
//			{
//				count += 3;
//			}
//			else
//			{
//				count = count + (arr[i] - 't' + 1) % 3;
//			}
//		}
//		else
//		{
//			if ((arr[i] - 'w' + 1) % 4 == 0)
//			{
//				count += 4;
//			}
//			else
//			{
//				count = count + (arr[i] - 'w' + 1) % 4;
//			}
//		}
//	}
//	printf("%d", count);
//}



//小国的键盘
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char arr[105] = "";
//	scanf("%s", &arr);
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == 'V' && arr[i + 1] == 'K')
//		{
//			count++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == 'V' && arr[i + 1] == 'V'&&arr[i+2]=='V')
//		{
//			count++;
//			break;
//		}
//		else if (arr[i] == 'K' && arr[i - 1] == 'K'&&arr[i-2]=='K')
//		{
//			count++;
//			break;
//		}
//	}
//	printf("%d", count);
//}



//单词覆盖还原
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[260] = "";
//	scanf("%s", &arr);
//	int l = strlen(arr);
//	int count1 = 0;
//	int count2 = 0;
//	for (int i = 0; i < l; i++)
//	{
//		if (arr[i] == 'b')
//		{
//			if (arr[i + 1] == 'o')
//			{
//				if (arr[i + 2] == 'y')
//				{
//					count1++;
//					i += 2;
//				}
//				else
//				{
//					count1++;
//					i++;
//				}
//			}
//			else
//			{
//				count1++;
//			}
//		}
//		else if (arr[i] == 'o')
//		{
//			if (arr[i + 1] == 'y')
//			{
//				count1++;
//				i++;
//			}
//			else
//			{
//				count1++;
//			}
//		}
//		else if (arr[i] == 'y')
//		{
//			count1++;
//		}
//		else if (arr[i] == 'g')
//		{
//			if (arr[i + 1] == 'i')
//			{
//				if (arr[i + 2] == 'r')
//				{
//					if (arr[i + 3] == 'l')
//					{
//						count2++;
//						i += 3;
//					}
//					else
//					{
//						count2++;
//						i += 2;
//					}
//				}
//				else
//				{
//					count2++;
//					i++;
//				}
//			}
//			else
//			{
//				count2++;
//			}
//		}
//		else if (arr[i] == 'i')
//		{
//			if (arr[i + 1] == 'r')
//			{
//				if (arr[i + 2] == 'l')
//				{
//					count2++;
//					i += 2;
//				}
//				else
//				{
//					count2++;
//					i += 1;
//				}
//			}
//			else
//			{
//				count2++;
//			}
//		}
//		else if (arr[i] == 'r')
//		{
//			if (arr[i + 1] == 'l')
//			{
//				count2++;
//				i += 1;
//			}
//			else
//			{
//				count2++;
//			}
//		}
//		else if (arr[i] == 'l')
//		{
//			count2++;
//		}
//	}
//	printf("%d\n", count1);
//	printf("%d\n", count2);
//
//}




//数字反转
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[25] = "";
//	scanf("%s", &arr);
//	if (arr[0] == '0')
//	{
//		printf("%c", arr[0]);
//		return 0;
//	}
//	int l = strlen(arr);
//	for (int i = 0; i < l; i++)
//	{
//		if (arr[i] == '.')
//		{
//			for (int j = 0; j < i; j++)
//			{
//				int k = i - 1 - j;
//				if (j < k)
//				{
//					char n = arr[j];
//					arr[j] = arr[k];
//					arr[k] = n;
//				}
//				else
//				{
//					break;
//				}
//			}
//			int k = l - 1;
//
//			for (int j = i + 1; j < l; j++)
//			{
//				if (j < k)
//				{
//					char n = arr[j];
//					arr[j] = arr[k];
//					arr[k] = n;
//				}
//				else
//				{
//					break;
//				}
//				k--;
//			}
//			for (int j = 0; j < l; j++)
//			{
//				if (arr[j] != '0' && j < i)
//				{
//					for (int k = j; k < i; k++)
//					{
//						printf("%c", arr[k]);
//					}
//					break;
//				}
//			}
//			printf("%c", arr[i]);
//			for (int j = l-1; j >i; j--)
//			{
//				if (arr[j] != '0' && j > i)
//				{
//					for (int k = i+1; k <=j; k++)
//					{
//						printf("%c", arr[k]);
//					}
//					break;
//				}
//			}
//			return 0;
//		}
//		else if (arr[i] == '/')
//		{
//			for (int j = 0; j < i; j++)
//			{
//				int k = i - 1-j;
//				if (j < k)
//				{
//					char n = arr[j];
//					arr[j] = arr[k];
//					arr[k] = n;
//				}
//				else
//				{
//					break;
//				}
//			}
//			int k = l - 1;
//			for (int j = i + 1; j < l; j++)
//			{
//				if (j < k)
//				{
//					char n = arr[j];
//					arr[j] = arr[k];
//					arr[k] = n;
//				}
//				else
//				{
//					break;
//				}
//				k--;
//			}
//			for (int j = 0; j < l; j++)
//			{
//				if (arr[j] != '0' && j < i)
//				{
//					for (int k = j; k < i; k++)
//					{
//						printf("%c", arr[k]);
//					}
//					break;
//				}
//			}
//			printf("%c", arr[i]);
//			for (int j = i + 1; j < l; j++)
//			{
//				if (arr[j] != '0')
//				{
//					for (int k = j; k < l; k++)
//					{
//						printf("%c", arr[k]);
//					}
//					break;
//				}
//
//			}
//		}
//		else if (arr[i] == '%')
//		{
//			for (int j = 0; j < i; j++)
//			{
//				int k = i - 1 - j;
//				if (j < k)
//				{
//					char n = arr[j];
//					arr[j] = arr[k];
//					arr[k] = n;
//				}
//				else
//				{
//					break;
//				}
//			}
//			for (int j = 0; j < i; j++)
//			{
//				if (arr[j] != '0' && j < i)
//				{
//					for (int k = j; k < i; k++)
//					{
//						printf("%c", arr[k]);
//					}
//					printf("%c", arr[i]);
//					return 0;
//				}
//			}
//		}
//		
//	}
//	for (int i = 0; i < l; i++)
//	{
//		if (i < l - 1 - i)
//		{
//			char n = arr[i];
//			arr[i] = arr[l - 1 - i];
//			arr[l - 1 - i] = n;
//		}
//	}
//
//	for (int i = 0; i < l; i++)
//	{
//		if (arr[i] != '0')
//		{
//			for (int j = i; j < l; j++)
//			{
//				printf("%c", arr[j]);
//			}
//			return 0;
//		}
//	}s
//}





//垂直柱状图
//#include<stdio.h>
//int main()
//{
//	char arr[4][105] = {'0'};
//	for (int i = 0; i < 4; i++)
//	{
//		int k = 0;
//		for (int j = 0; j < 105; j++)
//		{
//			k = j;
//			scanf("%c", &arr[i][j]);
//			if (arr[i][j] == '\n')break;
//		}
//		if (i == 3 && arr[i][k] == '\n')break;
//	}
//	int arr1[26] = { 0 };
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 105; j++)
//		{
//			int count = 0;
//			for (char k = 'A'; k <= 'Z'; k++)
//			{
//				if (arr[i][j] == k)
//				{
//					arr1[count]++;
//					count++;
//					break;
//				}
//				
//			}
//			if (arr[i][j] == '\n')break;
//		}
//	}
//	int arr2[26] = { 0 };
//	for (int i = 0; i < 26; i++)
//	{
//		arr2[i] = arr1[i];
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j < 26 - i; j++)
//		{
//			if (arr2[j] < arr2[j + 1])
//			{
//				int n = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j + 1] = n;
//			}
//		}
//	}
//	int arr3[26][2] = { 0 };
//	for (int i = 0; i < 26; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 26; j++)
//		{
//			if (arr2[i] == arr1[j])break;
//		}
//		arr3[i][0] = j;
//		arr3[i][1] = arr2[i];
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j <= arr3[i][0];j++)
//		{
//			if (arr1[j] >= arr2[0] - i - 1)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}


//密码
//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 0 };
//	char arr2[100] = "";
//	for (int i = 0; i < 6; i++)
//	{
//		scanf("%s", &arr2);
//		int l = strlen(arr2);
//		if (arr2[l - 1] == '.')
//		{
//			arr2[l - 1] == '\0';
//		}
//		char arr3[] = "one";
//		int strcmp(const char* arr2, const char* arr3);
//		if(strcmp==0)
//		{
//
//		}
//	}
//}



//密码
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[100] = "";
//	int arr2[15] = { 0 };
//	int count = 0;
//
//	for (int i = 0; i < 6; i++)
//	{
//		char arr1[100] = "";
//		scanf("%s", &arr1);
//		int l = strlen(arr1);
//		if (i == 5)
//		{
//			arr1[l - 1] = '\0';
//		}
//		if (strcmp(arr1, "one") == 0 || strcmp(arr1, "a") == 0 || strcmp(arr1, "another") == 0 || strcmp(arr1, "first") == 0)
//		{
//			arr2[count++] = 1;
//		}
//		else if (strcmp(arr1, "two") == 0 || strcmp(arr1, "both") == 0 || strcmp(arr1, "second") == 0)
//		{
//			arr2[count++] = 2;
//		}
//		else if (strcmp(arr1, "three") == 0 || strcmp(arr1, "third")==0)
//		{
//			arr2[count++] = 3;
//		}
//		else if (strcmp(arr1, "four") == 0 )
//		{
//			arr2[count++] = 4;
//		}
//		else if (strcmp(arr1, "five") == 0)
//		{
//			arr2[count++] = 5;
//		}
//		else if (strcmp(arr1, "six") == 0)
//		{
//			arr2[count++] = 6;
//		}
//		else if (strcmp(arr1, "seven") == 0)
//		{
//			arr2[count++] = 7;
//		}
//		else if (strcmp(arr1, "eight") == 0)
//		{
//			arr2[count++] = 8;
//		}
//		else if (strcmp(arr1, "nine") == 0)
//		{
//			arr2[count++] = 9;
//		}
//		else if (strcmp(arr1, "ten") == 0)
//		{
//			arr2[count++] = 10;
//		}
//		else if (strcmp(arr1, "eleven") == 0)
//		{
//			arr2[count++] = 11;
//		}
//		else if (strcmp(arr1, "twelve") == 0)
//		{
//			arr2[count++] = 12;
//		}
//		else if (strcmp(arr1, "thirteen") == 0)
//		{
//			arr2[count++] = 13;
//		}
//		else if (strcmp(arr1, "fourteen") == 0)
//		{
//			arr2[count++] = 14;
//		}
//		else if (strcmp(arr1, "fifteen") == 0)
//		{
//			arr2[count++] = 15;
//		}
//		else if (strcmp(arr1, "sixteen") == 0)
//		{
//			arr2[count++] = 16;
//		}
//		else if (strcmp(arr1, "seventeen") == 0)
//		{
//			arr2[count++] = 17;
//		}
//		else if (strcmp(arr1, "eighteen") == 0)
//		{
//			arr2[count++] = 18;
//		}
//		else if (strcmp(arr1, "nineteen") == 0)
//		{
//			arr2[count++] = 19;
//		}
//		else if (strcmp(arr1, "twenty") == 0)
//		{
//			arr2[count++] = 20;
//		}
//	}
//	for (int i = 0; i < count; i++)
//	{
//		arr2[i] = (arr2[i] * arr2[i]) % 100;
//	}
//	for (int i = 0; i < count-1; i++)
//	{
//		for (int j = 0; j < count - i-1-1; j++)
//		{
//			if (arr2[i] > arr2[i + 1])
//			{
//				int n = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j + 1] = n;
//			}
//		}
//	}
//	char arr3[100] = "";
//	if (arr2[0] < 10)
//	{
//		
//		arr3[0] = (char)arr2[0];
//		printf("%d", arr3[0]);
//		int j = 1;
//		for (int i = 1; i < count*2-1 ; i=i+2)
//		{
//			if (arr2[i] < 10)
//			{
//				arr3[i] = '0';
//				arr3[i + 1] = (char)arr2[j++];
//				printf("%d%d", arr3[i], arr3[i + 1]);
//			}
//			else
//			{
//				arr3[i + 1] = (char)(arr2[j] % 10);
//				arr2[j] = arr2[j] / 10;
//				arr3[i] = (char)(arr2[j++]);
//				printf("%d%d", arr3[i], arr3[i + 1]);
//			}
//		}
//	}
//	else
//	{
//		int j = 0;
//		for (int i = 0; i < count * 2; i += 2)
//		{
//			if (arr2[i] < 10)
//			{
//				arr3[i] = '0';
//				arr3[i + 1] = (char)arr2[j++];
//				printf("%d%d", arr3[i], arr3[i + 1]);
//			}
//			else
//			{
//				arr3[i + 1] = (char)(arr2[j] % 10);
//				arr2[j] = arr2[j] / 10;
//				arr3[i] = (char)(arr2[j++]);
//				printf("%d%d", arr3[i], arr3[i + 1]);
//			}
//		}
//	}
//	return 0;
//}


//你的飞碟在这儿
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[10] = "";
//	char arr2[10] = "";
//	scanf("%s", &arr1);
//	scanf("%s", &arr2);
//	int arr3[10] = { 0 };
//	int arr4[10] = { 0 };
//	int num1 = 1;
//	int num2 = 1;
//	int l1 = strlen(arr1);
//	int l2 = strlen(arr2);
//	for (int i = 0; i < l1; i++)
//	{
//		arr3[i] = arr1[i] - 'A' + 1;
//		num1 *= arr3[i];
//	}
//	for (int i = 0; i < l2; i++)
//	{
//		arr4[i] = arr2[i] - 'A' + 1;
//		num2 *= arr4[i];
//	}
//	if (num1 % 47 == num2 % 47)
//	{
//		printf("GO");
//	}
//	else
//	{
//		printf("STAY");
//	}
//}