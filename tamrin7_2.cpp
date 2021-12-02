#include<iostream>
using namespace std;
long int fact(int);
int main()
{
	int n;
	cin>>n;
	cout<<fact(n);

}

long int fact(int n)
{
	int m;
	if(n==0||n==1)
		return n;
	else{
		m = n * fact(n-1);
		return m;	
	}
}