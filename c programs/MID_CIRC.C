#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void Mid_Circle()
{
	int x1,y1,r,x,y,p;
	printf("Enter the center points of the circle\n");
	scanf("%d%d",&x1,&y1);
	printf("Enter the radius\n");
	scanf("%d",&r);
	x = r;
	y = 0;
	p = 0;
	while(x>=y)
	{
		putpixel(x1+x,y1+y,15);
		putpixel(x1+x,y1-y,15);
		putpixel(x1-x,y1+y,15);
		putpixel(x1-x,y1-y,15);
		putpixel(x1+y,y1+x,15);
		putpixel(x1-y,y1+x,15);
		putpixel(x1+y,y1-x,15);
		putpixel(x1-y,y1-x,15);

		if(p<=0)
		{
			y+=1;
			p+=2*y+3;
		}
		else
		{
			x-=1;
			p+=5-2*x;
		}
	}

}
int main()
{
	int gd =DETECT, gm;
	initgraph(&gd,&gm,"c://turboc3/bgi");
	clrscr();
	Mid_Circle();
	getch();
	closegraph();
	return 0;
}