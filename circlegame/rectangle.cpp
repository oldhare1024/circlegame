#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
int width = 800, height = 800;
int main()
{
	initgraph(width, height);
	setbkcolor(WHITE);
	cleardevice();
	int i,j,d = 20;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			setfillcolor(BLACK);
			fillrectangle(200 * (i - 1), 200 * (i - 1), 180 + 200 * (i - 1), 180 + 200 * (i - 1));
		}
	}
	_getch();
	cleardevice();
	return 0;
}