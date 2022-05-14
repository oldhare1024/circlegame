#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<graphics.h>
int width = 800, height = 600;
int main()
{
	initgraph(width, height);
	setbkcolor(GREEN);
	cleardevice();
	srand(time(0));
	int i,x[100], y[100], r[100], rmin = 8, rmax = 50, cnum = 100;
	for (i = 0; i < cnum; i++)
	{
		x[i] = rand() % width;
		y[i] = rand() % height;
		r[i] = rand() % (rmax - rmin + 1) + rmin;
		setfillcolor(RGB(rand()%255,rand()%255,rand()%255));
		setlinecolor(RGB(rand() % 255, rand() % 255, rand() % 255));
		fillcircle(x[i], y[i], r[i]);
		Sleep(60);
	}
	_getch();
	cleardevice();
	return 0;
}