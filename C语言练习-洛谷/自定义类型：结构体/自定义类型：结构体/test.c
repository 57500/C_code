#define  _CRT_SECURE_NO_WARNINGS 1

//�ṹ��Ĵ洢��С---������С���ֽڼ�����һ����Խ�ʡ�ռ� 

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


//VSĬ�϶�����Ϊ8--�����޸�--����#pragma pack(4)--ͨ��������Ըĳ�4--��������޸Ļ���
//�޸ĳ�1�����ö���




//�ṹ�崫��

//#include<stdio.h>
//struct s
//{
//	int date[100];
//	int num;
//};
//void print(const struct s* ss)//�����ֱ�Ӵ��Σ�����ָ�봫�ο��Խ�ʡ�ռ䣨�������¿����ڴ�ռ����洢���ݣ�
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




//λ��--������ʡ�ռ�--ֻ���ڽṹ��������---������ò���----��ƽ̨���������
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







//ͨѶ¼
