#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	const double pi=3.1415926;
	double r,s;
	
	cout<<"����Բ�İ뾶:"<<endl;
	cin>>r;
	s=pi*r*r;
	cout<<setprecision(8)<<"Բ�������:"<<setw(10)<<s<<endl;
	
	return 0;
}
