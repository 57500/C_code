

#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("******1.play 0.exit******\n");
	printf("*************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS, '*');
	//display(mine, ROW, COL);
	setmine(mine,ROW,COL);
	//display(mine, ROW, COL);
	display(show, ROW, COL);
	findmine(mine,show,ROW,COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("´íÎó\n");
			break;
		}
	} while (input);

}