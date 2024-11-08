#include <iostream>
using namespace std;
int main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int b[3]={0};
	for(int r=0;r<3;r++)
	{
		for(int c=0;c<4;c++)
		b[r]+=a[r][c];
	}
	for(int i=0;i<3;i++)
	cout<<b[i]<<'\t';
	
	return 0;
}
