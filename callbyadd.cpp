#include <iostream>
using namespace std;

int& add(int& n1,int& n2)
{
	int sum=n1+n2;
	int& s=sum;
	return s;
}

int main()
{
	int a,b;
	cin>>a>>b;
	int& num1=a;
	int& num2=b;
	cout<<"sum is : "<<add(num1,num2)<<endl;
	return 0;
}
