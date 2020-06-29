#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main(){
    int gd = DETECT,gm,dx,dy,i,j;
    initgraph(&gd,&gm,"C:/TURBOC3/BGI");
    line(120,120,250,120);
    line(250,120,185,180);
    line(185,180,120,120);
    setcolor(RED);
    printf("Enter the displacement coordinates: ");
    scanf("%d%d",&dx,&dy);
    line(120+dx,120+dy,250+dx,120+dy);
    line(250+dx,120+dy,185+dx,180+dy);
    line(185+dx,180+dy,120+dx,120+dy);




      //	line(120+dx,120+dy,250+dx,120+dy);
    getch();
    closegraph();
}