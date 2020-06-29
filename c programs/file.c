//
#include<stdio.h>
int main()
{
	char c;
	FILE *fp;
	fp=fopen("file.c","r");
	do{
		c=getc(fp);
		putchar(c);
	}while(c!=EOF);
	fclose(fp);
 return(0);
}

