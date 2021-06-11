#include<iostream>
using namespace std;

 void square(int *p)
{
	for(int i=0;i<10;i++)
	{
		*p=*p * *p;
		 p++;
		//*(p+i)=*(p+i)*(p+i);
	}
}

int main()
{
int a[10];
cout<<"enter 10 number";
for(int i=0;i<10;i++)
{
	cin>>a[i];
}
square(&a[0]);
	//square(a);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	int n;
	cin>>n;
	return 0;
}
