#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void circlea(int xo, int yo)
{  int r=yo,k,p;
	// obtain the first point on the circumferenc
	//xo =0 and y = r
	// set starting value for the decision parameter
	p = 1-r;
	//for all value of xk where k=0
	for(k=0;xo<=yo;k++)
	{
		if(p<0){
			xo+=1;
			p+=2*xo+3;
		}
		else{
			xo+=1;
			yo-=1;
			p+=2*xo-2*yo+5;
		}
		putpixel(xo,yo,RED);
		delay(10);
	 //	printf("%d %d\n",xo,yo);
	}
	printf("%d %d\n",xo,yo);
/*
circlea(xc+x,yc+y);
circlea(xc+x,yc+y);
circlea(xc+x,yc+y);
circlea(xc+x,yc+y);
circlea(xc+x,yc+y);
circlea(xc+x,yc+y);
circlea(xc+x,yc+y);
circlea(xc+x,yc+y);   */
}
void main()
{
int i=0;
int gd = DETECT, gm;
int xc=250,yc=250,r=20;
initgraph(&gd, &gm, "C:/TURBOC3/BGI");
clrscr();
circlea(xc,yc+r);
getch();
closegraph();
}