#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr1[3][4] = { {1,2},{2,3},{3,4} };
//	int arr2[][4] = { {1,2,3,4},{2,3} };
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//Խ�����
//#include<stdio.h>
//int main()
//{
//	int arr[4] = { 1,2,3,4 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//ð������
//#include<stdio.h>
//bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//
//			}
//		}
//	}
//
//}
//int main()
//{
//	
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//		printf("%d ", arr[i]);
//	
//}

//sizeof(������)
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//}

//&��ַ��ȡ��������������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//}

//��ά���鿴��һά����
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//}