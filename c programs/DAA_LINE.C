#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void DDA_line()
{
	int x1,x2,y1,y2,dx,dy,slope,i,xinc,yinc;
	printf("Enter the two end points of the line\n");
	scanf("%d%d",&x1,&y1);
	printf("Second point\n");
	scanf("%d%d",&x2,&y2);
	dx = x2-x1;
	dy = y2-y1;
	if(abs(dx)>abs(dy))
		slope = dx;
	else
		slope = dy;
	xinc = x1/(float)slope;
	yinc = y1/(float)slope;
	putpixel(x1,y1,12);
	for(i=0; i<slope; i++)
	{    //printf("%d%d\n",x1,y1);
		x1+=xinc;
		y1+=yinc;
		putpixel(x1,y1,12);
	}
}
int main()
{
	int gd =DETECT, gm;
	initgraph(&gd,&gm,"c://turboc3/bgi");
	clrscr();
	DDA_line();
	getch();
	closegraph();
	return 0;
}