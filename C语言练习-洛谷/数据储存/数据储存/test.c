#define  _CRT_SECURE_NO_WARNINGS 1
//unsigned->无符号


//构造类型
//数组，结构体，枚举，联合

//空类型void

//内存中存放补码的二进制,取反加一

//大小端字节序存储

//*(char*)&a

//unsigned和signed的区别,存储范围

//整形提升补码补1->有符号型，，，，无符号型补0
//(放进去和取出来的区别)




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
//--->strlen的返回值是unsigned int----size_t






//浮点型


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
//浮点数的小数不一定可以精确表示
//float-->4byte
