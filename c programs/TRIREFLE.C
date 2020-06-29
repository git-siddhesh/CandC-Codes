#include<stdio.h>
#include<conio.h>
#include<graphics.h>
drawQuad(int x1,int y1,int x2,int y2)
{
  line(x1,y1,x2,y2);
 // line(200,300,600,300);

}
void main()
{ int gd=DETECT,gm,x1,x2,y1,y2,t1,t2,t3,t4,t5,t6,p1,p2,p3,p4,p5,p6;
  clrscr();
  initgraph(&gd,&gm,"c://turboc3/bgi");
  printf("Enter the coordinates of axis\n");
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  drawQuad(x1,y1,x2,y2);
  printf("Enter the coodinates of triangle\n");
  scanf("%d%d%d%d%d%d",&t1,&t2,&t3,&t4,&t5,&t6);
  line(t1,t2,t3,t4);
  line(t3,t4,t5,t6);
  line(t5,t6,t1,t2);
  p1=2*x1-t1;
  p2=t2;
  p3=2*x1-t3;
  p4=t4;
  p5=2*x1-t5;
  p6=t6;
  line(p1,p2,p3,p4);
  line(p3,p4,p5,p6);
  line(p5,p6,p1,p2);



  getch();
  closegraph();
	 }