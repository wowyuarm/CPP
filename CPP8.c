//判断一个整数是否为完数 
#include <iostream>
using namespace std;
int main()
{
	int n;
	int m=0;
	
	cout<<"输入一个数:"<<endl;
	cin>>n;
	for(int i=1;i<=(n/2);i++)
	{
		if(n%i==0) 
			m+=i;
	}
	if(m==n)
		cout<<"这个数是完数!"<<endl;
	else
		cout<<"这个数不是完数!"<<endl;
	return 0;
}
