//对于任意互素的a和n，设f(n)为小于等于n的正整数中与n互素的整数个数，验证：a的f(n)次方除以n的余数恒为1.
#include <iostream>														// n=pow(a,f(n))%n==1
#include <cmath>
#include <cstdlib>														 
using namespace std;

int OJLD(int m,int n)
{
	int q;
	while(n!=0)
	{
		q=m%n;
		m=n;
		n=q;
	}
	return m;
}
int main()
{
	int a=rand()%100+1;//生成一个范围在 1 到 100 之间的随机整数
	int n=rand()%100+1;
	int fn=0;
	
	for(int i=1;i<=n;i++)
	{
		OJLD(n,i);
		while(n==1)
		{
			fn++;
		}
	}
	
	if((int)pow(a,fn)%n==1)
	{
		cout<<"a的f(n)次方除以n的余数恒为1."<<endl;
	}
	
	return 0;	
}





