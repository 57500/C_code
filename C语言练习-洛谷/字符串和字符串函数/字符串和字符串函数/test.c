#define  _CRT_SECURE_NO_WARNINGS 1


//��������


//#include<string.h>

//strlen--\0��ֹ--����ֵ��size_t��unsigned intע��ʹ������

//strcpy--����strcpy(arr,"zhangsan");--\0��ֹ--����Խս--����char*

//strncpy--����ָ���ַ�--strncpy(arr1,arr2,5);���5>arr2��\0

//strcat--׷���ַ���strcat(arr,"world");ͬ��--�����Լ����Լ�׷��

//strncat--׷��ָ���ַ���strncat(arr1,"world",3);���3>""��ֻ׷�ӡ����������

//strcmp--�Ƚ��ַ����Ƿ����--strcmp(arr1,arr2);��arr1>arr2ʱ����int>0-->=<ͬ��

//strncmp--ͬ��strcmp(arr1,arr2,3);

//strstr--�����ַ���strstr(arr1,arr2);����ҵ��˷���arr1�ж�Ӧarr2���׵�ַ�����򷵻ؿ�ָ��--char*

//strtok--�и��ַ���--��ı�ԭ�ַ����������Ҫ������ʱ����--strtok(arr1,arr2);����char*���и�������ַ�

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



//strerror--���󱨸溯��--�⺯��strerror(errno);

//isspace--�ж��Ƿ�Ϊ�հ��ַ�--isspace('w');--����int 0���򷵻ط�0

//isdigit--�ж��Ƿ�����--������򷵻ط�int 0

//islower,isupper,isalpha,isalnum(��ĸ������),ispunch(������),isgraph,isprint----�ַ����ຯ��

//tolower('W');toupper('w');--��Сдת���ַ�����

//memcpy--�ڴ濽��--memcpy(arr2,arr1,28)--28���ֽڿռ��С--���Կ����������͵�����--���ı�ռ��С�������

//#include<stdio.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[15] = { 1,1,1,1,1,1,1,1,1,1,1,1,1 };
//	memcpy(arr2, arr1, 40);
//}


//memmove(arr1+2,arr1,20)--�ƶ�����

//memcmp(arr1,arr2,12)�Ƚ��κ����͵�����

//memset(arr,'w'��4)��arr����׵�ַ����4���ֽ����ݸ�Ϊ'w'