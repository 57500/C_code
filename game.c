#include"game.h"

void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------ɨ����Ϸ------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[ROWS][COLS], int row, int col)
{
	int count=easycount;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}

}
int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y] + board[x - 1][y - 1] + board[x - 1][y + 1] + board[x][y - 1] + board[x][y + 1] + board[x + 1][y] + board[x + 1][y - 1] + board[x + 1][y + 1] -
		8 * '0';
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-easycount)
	{
		printf("������Ҫ�Ų������\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�����ȵ�����\n");
				display(mine, ROW, COL);
				break;
			}
			else if (show[x][y] != '*')
			{
				printf("���������ظ�������������\n");
			}
			else
			{
				win++;
				int count=get_mine_count(mine,x,y);
				show[x][y] = count + '0';
				display(show, ROW, COL);
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}
	if (win == row * col - easycount)
	{
		printf("��ϲ�����׳ɹ�\n");
		display(mine, ROW, COL);
	}

	

}