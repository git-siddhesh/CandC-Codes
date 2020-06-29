#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char *str;
char *str2;
int n1,n2,i;
printf("Enter the size of first and second\n");
scanf("%d%d",&n1,&n2);
str =(char*)malloc(n1*sizeof(char));
str2 =(char*)malloc(n2*sizeof(char));
printf("%d%d",sizeof(str),sizeof(str2));
for(i=0;i<n1;i++)
{ scanf("%d",(str+1));
  printf("%d",*(str2+1));
}
getch();
}