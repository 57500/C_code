#define  _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";-->写入的是首字符的地址，打印字符串到\0
//	printf("%s\n", p);
//}



//#include<stdio.h>
//int main()
//{
//	const char* p1 = "abcd";
//	const char* p2 = "abcd";
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	if (p1 == p2)
//		printf("1");
//	else
//		printf("2");
//	if (arr1 == arr2)
//		printf("1");
//	else
//		printf("2");
//}



//指针数组,,存放指针的数组


//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2 };
//	int arr2[] = { 2,3 };
//	int arr3[] = { 3,4 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);-->parr[i]==parr+i
//		}
//		printf("\n");
//	}
//
//}





//数组指针-->指向数组的指针


//int(*p)[10]是数组指针
//
//#include<Stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//-->整个数组的地址
//	int sz = sizeof(arr);
//	printf("%d\n", sz);//同上
//}



//数组指针的表现
//#include<Stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//-->首元素地址
//	int (*p2)[10] = &arr;//-->整个数组的地址，因此为数组指针
//}


//#include<Stdio.h>
//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*p)[5] = &arr;
//
//	char ch = 'w';
//	char* p1 = &ch;
//	char** p2 = &p1;//-->p2先与*结合变成一级指针再指向char*变成二级指针
//}



//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int(*p)[5] = &arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));//-->*p本质上是数组首元素地址
//	}
//}



//数组指针的用法
//#include<stdio.h>
//
//void printf1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void printf2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	printf1(arr, 3, 5);
//	printf2(arr, 3, 5);
//}




//数组参数和指针参数


//传参时二维数组列不能省略
//传参类型只要能对应就可以传*,&






//函数指针--指向函数的指针
//
//#include<Stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", &add);
//	printf("%p\n", add);
//	int (*p)(int, int) = &add;
//	int ret = (*p)(2, 3);
//	printf("%d\n", ret);
//}
//函数也是有地址的，放其形式参数等内容，并且可以通过函数指针来进行函数操作
//函数后面的括号是不是有解引用的意思？



//函数指针进阶

//复习
//#include<stdio.h>
//int main()
//{
//	//指针数组
//	int* arr[4];
//	char* ch[5];
//	//数组指针
//	int arr2[5];
//	int (*p)[5] = &arr2;
//
//	char* arr3[5];
//	char* (*p1)[5] = &arr3;
//
//}



//#include<Stdio.h>
//int test(const char* str)
//{
//	printf("1");
//	return 0;
//}
//int main()
//{
//	int (*pf)(const char*) = test;
//	(*pf)("abc");
//	pf("abc");
//}



//函数指针的运用-->利用函数指针
// 
//#include<stdio.h>
//void menu()
//{
//	printf("********************\n");
//	printf("*****1.+ 2.-********\n");
//	printf("*****3.* 4./********\n");
//	printf("*****0.exit*********\n");
//	printf("********************\n");
//
//
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void calc(int(*p)(int, int))
//{
//	int x;
//	int y;
//	int ret;
//	printf("请输入两个操作数：");
//	scanf("%d %d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//		
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//		case 3:
//			calc(mul);
//		case 4:
//			calc(div);
//		case 0:
//			printf("退出程序");
//			break;
//		default :
//			printf("选择错误请重新选择\n");
//			break;
//		}
//			
//	} while (input);
//	return 0;
//}






//函数指针数组--把函数指针存放在数组里面---转移表
//#include<stdio.h>
//void add(int x,int y)
//{
//	return x + y;
//}
//void sub(int x,int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*arr[2])(int, int) = { add,sub };
//	arr[1](2,1);
//}


//#include<stdio.h>
//void menu()
//{
//	printf("********************\n");
//	printf("*****1.+ 2.-********\n");
//	printf("*****3.* 4./********\n");
//	printf("*****0.exit*********\n");
//	printf("********************\n");
//
//
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int x, y, ret;
//	int input = 0;
//	do
//	{
//		int(*pfadd[5])(int,int) = { 0,add,sub,mul,div };
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出程序");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = pfadd[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误请重新选择\n");
//		}
//
//	} while (input);
//	return 0;
//}





//指向函数指针数组的指针
//同上int (*pfadd[5])(int,int)={0,add,sub,mul,div};
//int(*(*ppfadd[5])(int,int)=&pfadd;




//回调函数--通过函数指针调用函数


//冒泡排序的优化--flag=1

//qsort--可以排序任意类型的数据
//void*是没有具体类型的指针不能解引用操作，也不能直接+-,可以进行强制类型转换

//qsort的应用
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
struct stu
{
	char name[20];
	int age;
};
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);//强制类型转换

}
void test2()
{
	struct stu s[] = { {"zhangsan",15},{"lisi",16},{"wangwu",17} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	test2();
}


