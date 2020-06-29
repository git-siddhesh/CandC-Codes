#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void mid(int xc,int yc,int r)
{	int p,x=r,y=0;
	printf("(%d, %d)",x+xc,y+yc);
	if(r>0)
	{	/*printf("(%d, %d)",x+xc,-y+yc);
		printf("(%d, %d)",y+xc,x+yc);
		printf("(%d, %d)",-y+xc,x+yc); */
		putpixel(x+xc,-y+yc,RED);
		putpixel(y+xc, x+yc,RED);
		putpixel(-y+xc, x+yc,RED);

	}
	p=1-r;
	while(x>y)
	{	y++;
		if(p>0)
		{  x--;
			p+=2*y-2*x+1;
		}
		else
			p+=2*y+1;
		if(x<y)
			break;
//print the points and its reflection in other octants
	/*	printf("(%d, %d)",x+xc,y+yc);
		printf("(%d, %d)",-x+xc,y+yc);
		printf("(%d, %d)",x+xc,-y+yc);
		printf("(%d, %d)",-x+xc,-y+yc);
		*/
		putpixel(x+xc,y+yc,RED);
		putpixel(-x+xc,y+yc,RED);
		putpixel(x+xc,-y+yc,RED);
		putpixel(-x+xc,-y+yc,RED);
//if the generated point is on line x=y
//then the perimeter points have already been printed
		if(x!=y)
		{ /*	printf("(%d, %d)",y+xc,x+yc);
			printf("(%d, %d)",-y+xc,x+yc);
			printf("(%d, %d)",y+xc,-x+yc);
			printf("(%d, %d)",-y+xc,-x+yc);
			*/
			putpixel(y+xc,x+yc,RED);
			putpixel(-y+xc,x+yc,RED);
			putpixel(y+xc,-x+yc,RED);
			putpixel(-y+xc,-x+yc,RED);
		}
	}

}
void main()
{  int xc,yc,x,y,r,p,gd=DETECT,gm;
	initgraph(&gd,&gm,"	C:/TURBOC3/BGI");
	clrscr();
	printf("Enter the center coordinates and radius");
	scanf("%d%d%d",&xc,&yc,&r);
 /*	x=0;y=r;
	putpixel(0,r,RED);
	p = 1-r;
	do
	{  if(p<0)
		{  x=x+1;
			p+=2*x+3;
		}
		else{
			x+=1;
			y-=1;
			p+=2*x-2*y+5;
		}
		putpixel(x,y,RED);
	}while(x<y);
	*/
	mid(xc,yc,r);
	getch();

}