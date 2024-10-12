#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	const double pi=3.1415926;
	double r,s;
	
	cout<<"输入圆的半径:"<<endl;
	cin>>r;
	s=pi*r*r;
	cout<<setprecision(8)<<"圆的面积是:"<<setw(10)<<s<<endl;
	
	return 0;
}
