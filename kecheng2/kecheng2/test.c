#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//int main()
//{
//	const int a = 10;
//	
//	printf("%d\n", a);
//	return 0;
//}
//#define MAX 100
//#define STR "abcdf"
//
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//
//	enum Color c = RED;
//	
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	int len = strlen(arr1);
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("abc\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("abc\ndef");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("%s\n", "(are you ok??)");
//	return 0;
//
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("%c\n", '\'');
//	return 0;
//}
//%d打印整形
//%c打印字符
//%s字符串
//%ffloat
//%lfdouble
//%zu  sizeof


//#include <stdio.h>
//
//int main()
//{
//	printf("%s\n", "c:\\test\\test.c");
//	return 0;
//}
//#include <stdio.h>

//int main()
//{
//	printf("\a");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\x63');
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", strlen("qwer \t"));
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", strlen("c:\\test\\628\\test.c"));
//	return 0;
//}

//#include<stdio.h>

//#include <stdio.h>
//
//
//int main()
//
//
//{
//	int ans = 1;
//		scanf("%d", &n);
//     
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//		printf("加入比特");
//		while (line < 100)
//		{
//			printf("写代码\n");
//			line++;
//		}
//		if (line = 100)
//		{
//			printf("好offer");
//		}
//
//	return 0;
////}
//
//	int add(int x, int y)
//	{
//		int z = 0;
//		z = x + y;
//		return z;
//	}
//
//	
//#include <stdio.h>
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = add(n1, n2);
//	printf("sum");
//
//	return 0;
//}

//#include <stdio.h>
//	int main()
//	{
//		int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
//		int i = 0;
//		while (i < 10)
//
//		{
//			printf("%d\n", arr[i]);
//			i++;
//		}
//
//		return 0;
//	}


//#include <stdio.h>
//    int main()
//    {
//        int coding = 0;
//        printf("你会去敲代码吗？（选择1 or 0）:>");
//        scanf("%d", &coding);
//        if (coding == 1)
//        {
//            printf("坚持，你会有好offer，女朋友陪在身边\n");
//        }
//        else
//        {
//            printf("毕业即失业，女朋友跟你分手\n");
//        }
//        return 0;
//    }

//#include<stdio.h>
//	int main()
//	{
//		int coding = 0;
//		printf("？（1/0）\n");
//		canf("%d", &coding);
//		if (coding == 1)
//		{
//			printf("我也会的！\n");
//		}
//		else
//		{
//			printf("我不同意！\n");
//		}
//
//		return 0;
//	}
//
//#include<stdio.h>
//
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1;
//	int num2;
//	int sum = 0;
//	printf("请输入两个数\n");
//
//	scanf("%d %d", &num1, &num2);
//	sum = add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int num = 10;
//    &num;//取出num的地址
//    //注：这里num的4个字节，每个字节都有地址，取出的是第一个字节的地址（较小的地址）
//    printf("%p\n", &num);//打印地址，%p是以地址的形式打印
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'q';
//    printf("%c\n", ch);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a == 3)
//	{
//		printf("3");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 9:
//        printf("星期一！");
//        break;
//    case 2:
//        printf("星期二！");
//        break;
//    case 3:
//        printf("星期三！");
//        break;
//    case 4:
//        printf("星期四！");
//        break;
//    case 5:
//        printf("星期五！");
//        break;
//    case 6:
//        printf("星期六！");
//        break;
//    case 7:
//        printf("星期天！");
//        break;
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	printf("Hello,World!");
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%s\n","  *\n ***\n*****\n ***\n  *");
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//    printf(
//        "                ********\n"
//        "               ************\n"
//        "               ####....#.\n"
//        "             #..###.....##....\n"
//        "             ###.......######              ###            ###\n"
//        "                ...........               #...#          #...#\n"
//        "               ##*#######                 #.#.#          #.#.#\n"
//        "            ####*******######             #.#.#          #.#.#\n"
//        "           ...#***.****.*###....          #...#          #...#\n"
//        "           ....**********##.....           ###            ###\n"
//        "           ....****    *****....\n"
//        "             ####        ####\n"
//        "           ######        ######\n"
//        "##############################################################\n"
//        "#...#......#.##...#......#.##...#......#.##------------------#\n"
//        "###########################################------------------#\n"
//        "#..#....#....##..#....#....##..#....#....#####################\n"
//        "##########################################    #----------#\n"
//        "#.....#......##.....#......##.....#......#    #----------#\n"
//        "##########################################    #----------#\n"
//        "#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n"
//        "##########################################    ############\n"
//    );
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %
//	int z = 0;
//	z = a + b;
//	printf("%d\n", z);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c;
//	scanf("%c", &c);
//	printf("%c\n",'c');
//    
//		
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float a = 7 / 2.0;
//	printf("%.2f", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	if (a = 3)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 0;
//	if (a || b)
//	{
//		printf("hehe\n");
//	}
//}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int r = a > b ? a : b;
	printf("%d\n", r);
}