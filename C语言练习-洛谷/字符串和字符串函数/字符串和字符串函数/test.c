#define  _CRT_SECURE_NO_WARNINGS 1


//函数介绍


//#include<string.h>

//strlen--\0截止--返回值是size_t即unsigned int注意使用条件

//strcpy--拷贝strcpy(arr,"zhangsan");--\0截止--不能越战--返回char*

//strncpy--拷贝指定字符--strncpy(arr1,arr2,5);如果5>arr2则补\0

//strcat--追加字符串strcat(arr,"world");同上--不能自己给自己追加

//strncat--追加指定字符数strncat(arr1,"world",3);如果3>""则只追加“”里的内容

//strcmp--比较字符串是否相等--strcmp(arr1,arr2);当arr1>arr2时返回int>0-->=<同理

//strncmp--同理strcmp(arr1,arr2,3);

//strstr--查找字符串strstr(arr1,arr2);如果找到了返回arr1中对应arr2的首地址，否则返回空指针--char*

//strtok--切割字符串--会改变原字符串内容因此要创建临时变量--strtok(arr1,arr2);返回char*即切割出来的字符

//#include<stdio.h>
//int main()
//{
//	const char* sep = "@.";
//	char email[] = { "chang@sdadk.com" };
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//}



//strerror--错误报告函数--库函数strerror(errno);

//isspace--判断是否为空白字符--isspace('w');--返回int 0否则返回非0

//isdigit--判断是否数字--如果是则返回非int 0

//islower,isupper,isalpha,isalnum(字母和数字),ispunch(标点符号),isgraph,isprint----字符分类函数

//tolower('W');toupper('w');--大小写转换字符函数

//memcpy--内存拷贝--memcpy(arr2,arr1,28)--28是字节空间大小--可以拷贝任意类型的数据--不改变空间大小外的内容

//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[15] = { 1,1,1,1,1,1,1,1,1,1,1,1,1 };
//	memcpy(arr2, arr1, 40);
//}


//memmove(arr1+2,arr1,20)--移动拷贝

//memcmp(arr1,arr2,12)比较任何类型的数据

//memset(arr,'w'，4)把arr里的首地址往后4个字节内容改为'w'