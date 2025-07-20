//int variable allocated dynamically memory
#include<iostream>
using namespace std;
int main()
{
	int *p = NULL;
	p = new int (5);
	cout<<"enter a value"<<endl;
	cin>>*p;  //when we read via cin pointer so need to use *, 
	// in scanf we use scanf("%d",p); its works

	cout<<"entered value is "<<*p<<endl;
	delete(p);
}