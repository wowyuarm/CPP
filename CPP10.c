//验证费马小定理：如果p是素数，而a不是p的倍数，则a的p-1次方除以p的余数恒为1.
#include<iostream>
using namespace std;

bool isPrime(int p)
{
	if(p<=1) return false;
	for(int i=2;i<=sqrt(p);i++)
	{
		if(p%i==0) return false;
	}
	return true;//确认p是素数 
}

bool isMultiple(int a,int p)
{
	return (a%p!=0);//确认a不是p的倍数 
}

int Power(int a,int p)
{
	int result=1;
	for(int i=0;i<p;i++) result=result*a;
	return (result%p);
}

int main()
{
	int p,a,i;
	
	cout<<"1 to start or 0 to quit"<<endl;
	cin>>i;
	while(i==1)
	{
		cout<<"Enter two numbers:"<<endl;
		cin>>p>>a;
		if(isPrime(p)&&isMultiple(a,p))
		{
			if(Power(a,p-1)==1) 
				cout<<"Fermat's minor theorem holds!"<<endl;
			else
				continue;
		}
		else
		{
			cout<<"Please re-enter both numbers and make sure that one is prime and the other is not a multiple of it"<<endl;
			continue;
		}
	}
	
	return 0;
}
