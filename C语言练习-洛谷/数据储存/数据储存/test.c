#define  _CRT_SECURE_NO_WARNINGS 1
//unsigned->�޷���


//��������
//���飬�ṹ�壬ö�٣�����

//������void

//�ڴ��д�Ų���Ķ�����,ȡ����һ

//��С���ֽ���洢

//*(char*)&a

//unsigned��signed������,�洢��Χ

//�����������벹1->�з����ͣ��������޷����Ͳ�0
//(�Ž�ȥ��ȡ����������)




//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%d", strlen(arr));
//}




//#include<stdio.h>
//int main()
//{
//	unsigned char i;---->0~255
//	for (i = 0; i <= 256; i++)
//	{
//		printf("1");
//	}
//}





//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") >= 0)
//		printf(">");
//	else
//		printf("<");
//}
//--->strlen�ķ���ֵ��unsigned int----size_t






//������


//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//	*pfloat = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//}




//V=(-1)^S*M*2^E
//V=9.5f
// =1001.1
// =1.0011*2^3
// =(-1)^0* 1.0011 * 2 ^ 3
//��������С����һ�����Ծ�ȷ��ʾ
//float-->4byte
