//�ж�һ�������Ƿ�Ϊ���� 
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
	cout<<"����һ����:"<<endl;
	cin>>n;
	if(isPerfect(n)==true)
		cout<<"�����������!"<<endl;
	else
		cout<<"�������������!"<<endl;
	return 0;
}
