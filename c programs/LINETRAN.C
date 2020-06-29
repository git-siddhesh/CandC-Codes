#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main(){
    int gd = DETECT,gm,dx,dy,i,j;
    initgraph(&gd,&gm,"C:/TURBOC3/BGI");
    line(120,120,250,120);
    printf("Enter the displacement coordinates: ");
	 scanf("%d%d",&dx,&dy);
	 setcolor(BLACK);
	for(i=120,j=120;i<dx+120,j<dy+120;i++,j++)
	{
	 line(120+i,120+j,250+i,120+j);
	 delay(500);
	 clrscr();
	}
      //	line(120+dx,120+dy,250+dx,120+dy);
    getch();
    closegraph();
}