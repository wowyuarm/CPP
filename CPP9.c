//判断一个整数是否为完数 
#include <iostream>
using namespace std;
bool isPerfect(int n)
{
	int m=0;
	for(int i=1;i<=(n/2);i++)
	{
		if(n%i==0) 
			m+=i;
	}
	return n==m;
}
int main()
{
	int n;
	cout<<"输入一个数:"<<endl;
	cin>>n;
	if(isPerfect(n)==true)
		cout<<"这个数是完数!"<<endl;
	else
		cout<<"这个数不是完数!"<<endl;
	return 0;
}
