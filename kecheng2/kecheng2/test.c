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
//%d��ӡ����
//%c��ӡ�ַ�
//%s�ַ���
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
//		printf("�������");
//		while (line < 100)
//		{
//			printf("д����\n");
//			line++;
//		}
//		if (line = 100)
//		{
//			printf("��offer");
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
//        printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
//        scanf("%d", &coding);
//        if (coding == 1)
//        {
//            printf("��֣�����к�offer��Ů�����������\n");
//        }
//        else
//        {
//            printf("��ҵ��ʧҵ��Ů���Ѹ������\n");
//        }
//        return 0;
//    }

//#include<stdio.h>
//	int main()
//	{
//		int coding = 0;
//		printf("����1/0��\n");
//		canf("%d", &coding);
//		if (coding == 1)
//		{
//			printf("��Ҳ��ģ�\n");
//		}
//		else
//		{
//			printf("�Ҳ�ͬ�⣡\n");
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
//	printf("������������\n");
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
//    &num;//ȡ��num�ĵ�ַ
//    //ע������num��4���ֽڣ�ÿ���ֽڶ��е�ַ��ȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
//    printf("%p\n", &num);//��ӡ��ַ��%p���Ե�ַ����ʽ��ӡ
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
//        printf("����һ��");
//        break;
//    case 2:
//        printf("���ڶ���");
//        break;
//    case 3:
//        printf("��������");
//        break;
//    case 4:
//        printf("�����ģ�");
//        break;
//    case 5:
//        printf("�����壡");
//        break;
//    case 6:
//        printf("��������");
//        break;
//    case 7:
//        printf("�����죡");
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