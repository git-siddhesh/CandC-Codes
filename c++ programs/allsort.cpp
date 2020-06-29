//
#include<iostream>
using namespace std;
#define max 3
int main()
{
	//Implementation of stack
	int top=-1,no,stack[max];
	do{
		if(top==max){
			cout<<"Stack overflow";top--;
	}
		else{
			top+=1;
			cout<<"Enter the no : ";
			cin>>no;
			stack[top] = no;
		}
	}while(top<=max);
 return(0);
}

