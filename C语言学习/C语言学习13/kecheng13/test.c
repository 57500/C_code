#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//	*pc = 1;
//	printf("%d\n", a);
//
//}

//指针类型
//#include<stdio.h>
//int main()
//{
//	int a = 0x112233;
//	int* pa = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//}

//野指针
//#include<stdio.h>
//int main()
//{
//	int* pa = NULL;
//	int a = 10;
//	pa = &a;
//	if (pa != NULL)
//	{
//		*pa = 100;
//	}
//	printf("%d\n", *pa);
//}


//指针运算
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = 1;
//		printf("%d ", arr[i]);
//	}
//}

//指针相减
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//}
//指向同一个空间的指针才可以相减>>元素个数


//应用
// 对比
//#include<stdio.h>
//
//mystrlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = mystrlen("abcdef");
//	printf("%d\n", len);
//}

//指针做法>>指针的减法，，，加法没意义
//#include<stdio.h>
//mystrlen(char* str)
//{
//	char *strl=str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str-strl);
//}
//int main()
//{
//		int len = mystrlen("abcdef");
//		printf("%d\n", len);
//	
//}


//指针与数组>>指针地址和指向数组元素的地址是一样的
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
// 
// 
//                   arr[i]==*(arr+i)