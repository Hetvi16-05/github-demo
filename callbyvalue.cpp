#include <iostream>
using namespace std;

void swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
	cout<<"After swapping"<<endl<<"x:"<<x<<endl<<"y:"<<y<<endl;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"Before swapping:"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
	swap(a,b);
	//cout<<"back to original value:"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
	return 0;
}
