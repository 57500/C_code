#define  _CRT_SECURE_NO_WARNINGS 1
//#include<Stdio.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = { "welcome to bit!!!" };
//	char arr2[] = { "#################" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<Stdio.h>
//int main()
//{
//	printf("����������\n");
//	
//	char acc2[20] = { 0 };
//	int i = 1;
//	while (i <= 3)
//	{
//		scanf("%s", acc2);
//		if (strcmp(acc2,"123456") == 0)
//
//		{
//			system("cls");
//			printf("����������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//			i++;
//			system("cls");
//			printf("��������������%d\n",i-1);
//		}
//
//	}
//	if (i > 3)
//	{
//		printf("����,������Ӻ���\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("                    ");
//	printf("                    ");
//	printf("     1.play         ");
//	printf("     0.exit         ");
//	printf("                    ");
//	printf("                    ");
//
//
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	printf("������\n");
//	while (1)
//	{
//		
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{
//			printf("������Ϸ\n");
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		default:
//		{
//			printf("����\n");
//			break;
//		}
//
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	Sleep(200);
//	goto again;//���ܿ纯��
//}

//�ػ�С��Ϸ
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("�����룬��ĵ��Խ���һ�����ڹرգ�������룺�����ǣ���ȡ���ػ�\n");
//	scanf("%s", &input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a"); 
//	}
//	else
//		goto again;
//
//	return 0;
//}

//����
//strcpy

//#include<stdio.h>
//int main()
//
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//memset
//#include<Stdio.h>
//int main()
//{
//	char arr[20] = "hello bit";
//	memset(arr + 6, '*', 3);
//	printf("%s\n", arr);
//	return 0;
//}

//���庯��
//#include<stdio.h>
//int get_MAX(int x, int y)
//{
//	return(x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_MAX(a, b);
//	printf("%d\n", m);
//	return 0;
//}