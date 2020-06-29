//to find min no in an array using template in c++
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
template<class temp>
void num(temp arr[], int size)
{ temp min=arr[0];
  for(int i=0;i<size;i++)
  {  if(arr[i]<min)
    { min=arr[i];
    }
  }
  cout<<"min no is"<<min;
}
int main()
{ int n,a[100],m;
  string ch[6];
  clrscr();
  cout<<"Enter the size of array\n";
  cin>>n;
  cout<<"Enter the array\n";
  for(int i=0;i<n;i++)
	cin>>a[i];
  cout<<"Enter the string size";
  cin>>m;
  cout<<"Enter the string data\n";
  for(i=0;i<m;i++)
	cin>>ch[i];
  num(a,n);
  num(ch,m);
  return(0);
}
