#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void Bressenham()
{	int x1,y1,x2,y2,dx,dy,dp,i;
	printf("Enter the two end points\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	dx = x2-x1;
	dy = y2-y1;
	//Initial value of decision parameter
	dp = 2*dy - dx;
	for(i=0;i<dx;i++)
	{	x1+=1;
		if(dp<0)	dp+=2*dy;
		else
		{	y1+=1;
			dp+=2*dy - 2*dx;
		}
		delay(10);
		putpixel(x1,y1,RED);
	}
}
void DDA()
{	int x1,y1,x2,y2,dx,dy,dp,i,slope;
	float x,y,xinc,yinc;
	printf("Enter the two end points\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	dx = x2-x1;
	dy = y2-y1;
	x=x1;y=y1;
	if(abs(dx)>abs(dy))	slope=dx;
	else   slope = dy;
	putpixel(x1,y1,BLUE);
	xinc = dx/(float)slope;
	yinc = dy/(float)slope;
	for(i=0;i<slope;i++)
	{	x+=(0.5)*xinc;
		y+=(0.5)*yinc;
		putpixel(x,y,BLUE);
	}
}
void DrawCircle(x,y,xc,yc)
{  int p = 1-y;
	while(x<=y)
	{	x+=1;
		if(p<0)  p+=2*x + 3;
		else
		{	y-=1;
			p+=2*x - 2*y +5;
		}
		delay(10);
		putpixel(xc+x,yc+y,GREEN);
		putpixel(xc+x,yc-y,GREEN);
		putpixel(xc-x,yc+y,GREEN);
		putpixel(xc-x,yc-y,GREEN);
		putpixel(xc+y,yc+x,GREEN);
		putpixel(xc-y,yc+x,GREEN);
		putpixel(xc+y,yc-x,GREEN);
		putpixel(xc-y,yc-x,GREEN);
	}
}
void midCircle()
{  int xc,yc,r;
	clrscr();
	printf("Enter the center and radius of circle\n");
	scanf("%d%d%d",&xc,&yc,&r);
	DrawCircle(0,r,xc,yc);
}
/*void DrawRegions(x,y,xc,yc,rx,ry)
{	int p0 = ry*ry - rx*rx*ry +(float)(rx*rx)*0.25 ,p1;
	while((2*ry*ry*x)<(2*rx*rx*y))
	{  putpixel(xc+x,yc+y,GREEN);
		putpixel(xc-x,yc+y,GREEN);
		putpixel(xc+x,yc-y,GREEN);
		putpixel(xc-x,yc-y,GREEN);
		x+=1;
		if(p0<0)	  p0+=2*ry*ry*x + 3*ry*ry ;
		else
		{	y-=1;
			p0+=2*ry*ry*x - 2*rx*rx*y + 2*rx*rx + 3*ry*ry;
		}
	}
/*	p1 = ry*ry*((float)x+0.5)*((float)x+0.5) - rx*rx*ry*ry + rx*rx*(y-1)*(y-1);
	while(y>=0)
	{	putpixel(xc+x,yc+y,5);
		putpixel(xc-x,yc+y,5);
		putpixel(xc+x,yc-y,5);
		putpixel(xc-x,yc-y,5);
		y-=1;
		if(p1<0)	  p1+=-2*rx*rx*y + 3*rx*rx ;
		else
		{	x+=1;
			p1+=2*ry*ry*x - 2*rx*rx*y - 2*ry*ry + 3*rx*rx;
		}
	}
 */
void ffill(x,y,f,o)
{  if(getpixel(x,y)==o)
	{	putpixel(x,y,f);
		ffill(x-1,y,f,o);
		ffill(x+1,y,f,o);
		ffill(x,y+1,f,o);
		ffill(x,y-1,f,o);
	}
}
void bfill(x,y,f,b)
{  int c = getpixel(x,y);
	if((c!=b)&&(c!=f))
	{	putpixel(x,y,f);
		bfill(x-1,y,f,b);
		bfill(x+1,y,f,b);
		bfill(x,y+1,f,b);
		bfill(x,y-1,f,b);
	}

}
/*void midEllipse()
{  int xc,yc,rx,ry,p;
	clrscr();
	printf("Enter the center and radius of ellipse\n");
	scanf("%d%d%d%d",&xc,&yc,&rx,&ry);
	DrawRegions(0,ry,xc,yc,rx,ry);
} */
void main()
{	int gd=DETECT, gm, choice,i;
	clrscr();
	initgraph(&gd,&gm,"C://TURBOC3/BGI");
 //------------------------------
 //	Bressenham();
 //-----------------------------
 //	DDA();
 //-------------------------------
 //	midCircle();
 //-------------------------------
 //	midEllipse();

//flood fill algorithm---------
	setcolor(RED);
	for(i=0;i<50;i++)
		line(100,100+i,150,100+i);
	ffill(110,110,5,RED);

// boundary fill-----------------------

setcolor(GREEN);
	rectangle(210,210,250,250);
	bfill(221,221,5,GREEN);

//----------------------------------------
	getch();
	closegraph();

}