//Searching-(linear)
#include<stdio.h>
#include<conio.h>
void main()
{ int a[10],b,i,c;
   clrscr();
printf("Enter a list of no\n");
for(i=0;i<7;i++)
scanf("%d",&a[i]);
do{  clrscr();
printf("Enter the no to be search\n");
scanf("%d",&b);
for(i=0;i<7;i++)
{  if(a[i]==b)
   { printf("The no has found at %d",++i);
     break;
   }
}
if(i==7);
   printf("The no didnt exist in the list\n");
printf("Do you want to continue press 1 else press any key\n");
scanf("%d",&c);
}
while(c==1);
getch();
}