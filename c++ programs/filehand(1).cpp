#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	char name[20];
	int age,a;
	fstream f;
	f.open("sample.txt",ios::out);
	if(!f)
	{
		cout<<"Error";
		return 0;
	}
	
	cout<<"File created";
	/*cout<<"Enter name and age\n";
	cin>>name>>age;
	f<<name<<age;
	f.open("sample.txt",ios::in);
	f>>a>>n;
	f.close();
	cout<<name<<endl<<age;*/
	f<<"Hello";
	f.open("sample.txt",ios::in);
	f>>name;
	f.close();
	cout<<name;
	return 0;
}
