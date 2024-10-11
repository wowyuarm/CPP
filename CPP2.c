//三位数中的水仙花数个数 
#include<iostream>
using namespace std;

int main()
{
	int num=100;
	int a,b,c;
	
	do
        {
	   a=num/100;
	   b=num/10%10;
	   c=num%10;
	   
	   if(num==a*a*a+b*b*b+c*c*c)
          {
		cout<<num<<endl;
		num++;
 	  }
	   else
	  {
		num++;
	  }
        }while(num<1000);
	
	return 0;
}
