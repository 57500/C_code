#define  _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";-->д��������ַ��ĵ�ַ����ӡ�ַ�����\0
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



//ָ������,,���ָ�������


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





//����ָ��-->ָ�������ָ��


//int(*p)[10]������ָ��
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
//	printf("%p\n", &arr+1);//-->��������ĵ�ַ
//	int sz = sizeof(arr);
//	printf("%d\n", sz);//ͬ��
//}



//����ָ��ı���
//#include<Stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//-->��Ԫ�ص�ַ
//	int (*p2)[10] = &arr;//-->��������ĵ�ַ�����Ϊ����ָ��
//}


//#include<Stdio.h>
//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*p)[5] = &arr;
//
//	char ch = 'w';
//	char* p1 = &ch;
//	char** p2 = &p1;//-->p2����*��ϱ��һ��ָ����ָ��char*��ɶ���ָ��
//}



//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int(*p)[5] = &arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));//-->*p��������������Ԫ�ص�ַ
//	}
//}



//����ָ����÷�
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




//���������ָ�����


//����ʱ��ά�����в���ʡ��
//��������ֻҪ�ܶ�Ӧ�Ϳ��Դ�*,&






//����ָ��--ָ������ָ��
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
//����Ҳ���е�ַ�ģ�������ʽ���������ݣ����ҿ���ͨ������ָ�������к�������
//��������������ǲ����н����õ���˼��



//����ָ�����

//��ϰ
//#include<stdio.h>
//int main()
//{
//	//ָ������
//	int* arr[4];
//	char* ch[5];
//	//����ָ��
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



//����ָ�������-->���ú���ָ��
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
//	printf("������������������");
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
//		printf("��ѡ��");
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
//			printf("�˳�����");
//			break;
//		default :
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//			
//	} while (input);
//	return 0;
//}






//����ָ������--�Ѻ���ָ��������������---ת�Ʊ�
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�����");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = pfadd[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//
//	} while (input);
//	return 0;
//}





//ָ����ָ�������ָ��
//ͬ��int (*pfadd[5])(int,int)={0,add,sub,mul,div};
//int(*(*ppfadd[5])(int,int)=&pfadd;




//�ص�����--ͨ������ָ����ú���


//ð��������Ż�--flag=1

//qsort--���������������͵�����
//void*��û�о������͵�ָ�벻�ܽ����ò�����Ҳ����ֱ��+-,���Խ���ǿ������ת��

//qsort��Ӧ��
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
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);//ǿ������ת��

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


