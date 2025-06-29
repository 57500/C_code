#define  _CRT_SECURE_NO_WARNINGS 1

//移位符,进制,只针对整数
//左移
//#include<stdio.h>
//int main()
//{
//	int a = 7;
//	int b = a << 1;
//	printf("a=%d b=%d", a, b);
//}

//#include<stdio.h>
//int main()
//{
//	int a = -7;
//	int b = a << 1;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//}

//右移
//1.算术 2.逻辑
//#include<stdio.h>
//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//	printf("a=%d b=%d", a, b);
//}



//位操作符
//&按位（2进制）位与
//|             位或
//^             位异或

//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	printf("c=%d\n", c);
//}

//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后a=%d b=%d\n", a, b);
//}



//赋值操作符
// 
//复合赋值符
//




//单目操作符
//#include<stdio.h>
//int main()
//{
//	int a = -4;
//	printf("%d\n", ~a);
//}

//#include<stdio.h>
//int main()
//{
//	int a = 13;
//	a |= (1 << 4);
//	printf("%d\n", a);
//	a &= (~(1 << 4));
//	printf("%d\n", a);
//}

//++
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = a++;
//	printf("%d %d", a, b);
//
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	* p = 10;
//	printf("%d\n", a);
//}

//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//}

//sizeof不是函数
//strlen是库函数



//关系操作符


//逻辑操作符
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a || b;
//	printf("%d", c);
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || c++;
//	printf("%d%d%d%d", a, b, c, d);
//}



//三目操作符
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 0;
//	b = (a > 5 ? 3 : -3);
//	printf("%d", b);
//}

//逗号表达式
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 0;
//	c = (a > b, a ++, b = a + 1);
//	printf("%d%d%d", a, b, c);
//}

//下标引用操作符
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;
//	printf("%d\n", arr[7]);
//	7[arr] = 9;
//	printf("%d\n", arr[7]);
//}
//arr是首元素地址，arr+7是跳过七个元素指向第八个元素的意思


//函数调用操作符()
//#include<stdio.h>
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//void set_stu(struct stu* ps)
//{
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//void print_stu(struct stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//int main()
//{
//	struct stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//}


