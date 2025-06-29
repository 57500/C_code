#define  _CRT_SECURE_NO_WARNINGS 1

//指针
//二级指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	/**pa = 20;
//	printf("%d\n", a);*/
//	int** ppa = &pa;
//	printf("%p %p %p", a,pa, ppa);
//}
//**的意义？
//二级指针用来存放一级指针变量的地址


//指针数组
//存放指针的数组
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* parr[10] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 00; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//}




//结构体>>可以嵌套
//#include<stdio.h>
//
//struct peo
//{
//	char name[20];
//	char tele[12];
//	char sev[5];
//	int high;
//
//}p3,p4;//p1,p2;>>全局变量
//
//struct st
//{
//	struct peo p;
//	int num;
//	float f;
//
//};
//void print1(struct peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sev, sp->high);
//}
//void print2(struct peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sev, p.high);
//}
//
//int main()
//{
//	struct peo p1 = {"zhangsan","14754800270","男",181};
//	struct st s = { {"lisi","14754800270","女",166},100,3.14f };
//	printf("%s %s %s %d\n", p1.name, p1.sev, p1.tele, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sev, s.p.high, s.num, s.f);
//	print1(&p1);>>传地址所占内存比较小
//	print2(p1);》传整个参数所占内存比较大
//}


//浮点数不能精确保存




