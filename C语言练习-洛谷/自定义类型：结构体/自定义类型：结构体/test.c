#define  _CRT_SECURE_NO_WARNINGS 1

//结构体的存储大小---尽量让小的字节集中在一起可以节省空间 

//#include<stdio.h>
//#include<stddef.h>
//struct s1
//{
//	char a;
//	int b;
//	char c;
//};
//struct s2
//{
//	int b;
//	char a;
//	char c;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	printf("%d\n", sizeof(struct s2));
//
//
//	printf("%d\n", offsetof(struct s1, a));
//	printf("%d\n", offsetof(struct s1, b));
//	printf("%d\n", offsetof(struct s1, c));
//}


//VS默认对其数为8--可以修改--利用#pragma pack(4)--通过这个可以改成4--用完可以修改回来
//修改成1即不用对其




//结构体传参

//#include<stdio.h>
//struct s
//{
//	int date[100];
//	int num;
//};
//void print(const struct s* ss)//相比于直接传参，利用指针传参可以节省空间（不用重新开辟内存空间来存储数据）
//{
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", ss->date);
//	}
//	printf("%d ", ss.num);
//}
//int main()
//{
//	struct s ss = { {1,2,3 }, 100 };
//}




//位段--用来节省空间--只能在结构体里面用---大概率用不上----跨平台会出现问题
//
//#include<stdio.h>
//struct c
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct c));
//}







//通讯录
