#include <iostream>
using namespace std;

void reference(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"Before swapping:"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
	reference(a,b);
	cout<<"back to original value:"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
	return 0;
}
