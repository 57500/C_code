#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*********************************\n");
	printf("*********1.play   0.exit*********\n");
	printf("*********************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	while (1)
	{
		playermove(board,ROW,COL);
		ret=iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		displayboard(board, ROW, COL);
		computermove(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		displayboard(board, ROW, COL);

	}
	if (ret = '*')
		printf("���Ӯ\n");
	else if (ret = '#')
		printf("����Ӯ\n");
	else
	{
		printf("ƽ��\n");
	}
	displayboard(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��1/0��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}