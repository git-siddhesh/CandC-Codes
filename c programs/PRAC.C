#include<stdio.h>
#include<conio.h>
struct a{
 int x;
}m;
void main()
{
  char ch='x';
  int p = &ch;
  m.x=10;
  printf("%d",m.(*p));
  getch();

}