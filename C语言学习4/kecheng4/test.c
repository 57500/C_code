#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int age = 41;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 40)
//		printf("成年\n");
//	else if (age > 40 && age < 60)
//		printf("中年\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 3;
//	if (5 == num)
//		printf("hehe");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("xingqiyi");
//		break;
//	case 2:
//		printf("xingqier");
//		break;
//	default:
//		printf("wrong");
//		break;
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	switch(a)
//	{
//	case 1:b++;
//	case 2: a++;
//	case 3:
//		switch (a)
//		{
//		case 1:a++;
//		case 2:b++; a++;
//			break;
//
//		}
//	case 4:b++;
//		break;
//	default:
//		break;
//
//	}
//	printf("%d %d", a, b);
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
// 		if (i == 5)
//			continue;
//		printf("%d ", i );
//		i++;
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while (ch = getchar())
//		putchar(ch);
//	return 0;
////}
//
//#include<stdio.h>
//int main()
//
//{
//	char passward[20] = { 0 };
//	printf("请输入你的账号密码");
//	scanf("%s", passward);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认你的密码（Y/N）");
//		
//	int ret = getchar();
//	if (ret == 'Y')
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}

#include<stdio.h>
int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
			putchar(ch);
	}
	return 0;
}