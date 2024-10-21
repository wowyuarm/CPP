//输出一个数是否为素数
#include<iostream>
using namespace std;
int main()
{
	int n,i,c;
    bool b=true;
	
	cout<<"Enter 1 to start or q to quit:"<<endl;
	cin>>c;
	while(c==1)
	{
		cout<<"Enter a number:"<<endl;
		cin>>n;
		for(i=2;i<=(n/2);i++)
		{
			if(n%i==0)
			{
				b=false;
				cout<<"This is not a prime number!"<<endl;
				break;
			}
		}
		if(b==true)
		{
			cout<<"This is a prime number."<<endl;
		}
	}
	
	return 0;
} 
