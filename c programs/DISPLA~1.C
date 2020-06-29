//
#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	FILE *fp;
	clrscr();
	fp=fopen("DisplayContentOfFile.c","r");
	do{
		c=getc(fp);
		putchar(c);
	}while(c!=EOF);
	fclose(fp);
	getch();
 return(0);
}

