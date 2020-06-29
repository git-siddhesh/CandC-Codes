#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
	void boundaryfill4(x,y,fill,bound)
	{	int current = getpixel(x,y);
		if((current!=bound)&&(current!=fill))
		{
				putpixel(x,y,fill);
				delay(10);

		boundaryfill4(x+1,y,fill,bound);
		boundaryfill4(x,y+1,fill,bound);
		boundaryfill4(x-1,y,fill,bound);
		boundaryfill4(x,y-1,fill,bound);
		}
	}

	void main()
	{	int gd = DETECT, gm;
		initgraph(&gd, &gm, "c:/turboc3/bgi");
		clrscr();
		setcolor(WHITE);
		rectangle(100,100,150,150);
		boundaryfill4(101,101,BLUE,WHITE);

		line(100,100,300,100);
		circle(100,100,10);
		ellipse(300,100,0,180,10,50);
		getch();
		closegraph();

	}