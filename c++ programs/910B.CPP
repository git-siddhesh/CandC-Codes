//write a menu driven programm to enqueue and dqueue in circular queue
#include<stdio.h>
#include<conio.h>
void main()
{ int r=-1,f=-1,i,a,j,b,x;
  int q[5];
  clrscr();
  do
  {  clrscr();
  printf("Enter the operation\n 1 for enqueue and 2 for dequeue\n");
  printf("3 for display\n");
  scanf("%d",&a);
  switch(a)
  { case 1:
    {  if((r==4&&f==0)||f==r+1)
	printf("The queue is overflow\n");
       else if(r==4&&f!=0)
       { printf("Enter the item\n");
	 scanf("%d",&x);
	 r=0;
	 q[r]=x;
       }
	else
	 { r=r+1;
	   printf("Enter the item to be inserted\n");
	   scanf("%d",&x);
	   q[r]=x;
	 }
	 if(f==-1)
	 f=0;
	 printf("%d",x);
       break;
    }
    case 2:
    { if(f==-1)
       printf("Underflow");
      else if(f==r)
       {f=-1;r=-1;}
      else if(f==4)
       f=0;
      else
       f=f+1;
      break;
    }
    case 3:
    { if(f<r)
      {
       for(i=f;i<=r;i++)
       printf(" %d",q[i]);
      }
      else if(f>r)
      { for(i=f;i<=4;i++)
	printf(" %d",q[i]);
	for(j=0;j<=r;j++)
	printf(" %d",q[i]);
      }
      break;
    }
    default :
    {
    printf("wrong input\n");
    break;
    }
  }
  printf("\nPress 0 for exit and 1 for continue\n");
  scanf("%d",&b);
}
 while(b==1);
 getch();
}