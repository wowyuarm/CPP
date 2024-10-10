//已知三角形三边求面积
#include<iostream>
using namespace std;
#include<cmath>

int main()
{
	int a,b,c,s,p;
	
	cout<<"请输入三角形的三条边:"<<endl;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));9
	cout<<"该三角形的面积为:"<<s;
	
	return 0;
}
 
