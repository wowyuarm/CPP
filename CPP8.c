//�ж�һ�������Ƿ�Ϊ���� 
#include <iostream>
using namespace std;
int main()
{
	int n;
	int m=0;
	
	cout<<"����һ����:"<<endl;
	cin>>n;
	for(int i=1;i<=(n/2);i++)
	{
		if(n%i==0) 
			m+=i;
	}
	if(m==n)
		cout<<"�����������!"<<endl;
	else
		cout<<"�������������!"<<endl;
	return 0;
}
