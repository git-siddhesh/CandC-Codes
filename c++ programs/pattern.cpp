//
#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	for(i=0;i<5;i++){
		for(j=0;j<(5-i);j++){
			cout<<" ";
		} 
		for(k=0;k<=i;k++)
		  cout<<" *";
		cout<<endl;
	}
		for(i=0;i<4;i++){
				for(k=0;k<(i+2);k++)
		  cout<<" ";
		for(j=0;j<(4-i);j++){
			cout<<" *";
		} 
		cout<<endl;
	}
 return(0);
}

