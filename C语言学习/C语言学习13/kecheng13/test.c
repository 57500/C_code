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

//ָ������
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

//Ұָ��
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


//ָ������
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

//ָ�����
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//}
//ָ��ͬһ���ռ��ָ��ſ������>>Ԫ�ظ���


//Ӧ��
// �Ա�
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

//ָ������>>ָ��ļ����������ӷ�û����
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


//ָ��������>>ָ���ַ��ָ������Ԫ�صĵ�ַ��һ����
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