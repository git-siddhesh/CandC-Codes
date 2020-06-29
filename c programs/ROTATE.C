#include<stdio.h>

#include<graphics.h>
#include<math.h>
void main()
{
  int gd=DETECT,gm;
  float y1=100,x2=200,y2=100;
  double t=90,x1=99.00;
  double rad;
  float b1,b2,b3,b4;
  initgraph(&gd,&gm,"c:/turboc3/bgi");
  rad = t*(3.14/180);
  line(x1,y1,x2,y2);
  b3 = ((x2*cos(rad)-(y2*sin(rad))));
  b4 = ((x2*cos(rad)+(y2*sin(rad))));
  b1 = ((x1*cos(rad)-(y1*sin(rad))));
  b2 = ((x1*cos(rad)+(y1*sin(rad))));
  printf("%d %d %d %d ",b1,b2,b3,b4);
  line(x1,y1,x2+b3,y2+b4);

  closegraph();

}
