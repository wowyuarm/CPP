//�������⻥�ص�a��n����f(n)ΪС�ڵ���n������������n���ص�������������֤��a��f(n)�η�����n��������Ϊ1.
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
	int a=rand()%100+1;//����һ����Χ�� 1 �� 100 ֮����������
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
		cout<<"a��f(n)�η�����n��������Ϊ1."<<endl;
	}
	
	return 0;	
}





