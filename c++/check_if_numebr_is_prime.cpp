#include<iostream>
#include<conio.h>
using namespace std;
void IsPrime (int );


int main ()
{ int num;
cout<<"enter a number";
cin>>num;
IsPrime(num);

	getch();
	return 0;
}
void IsPrime (int n)
{int flag=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag++;
			break;
		}
	}
	if(flag==0)
		cout<<n<<" is prime";
	else
		cout<<n<<" is not prime";
}


