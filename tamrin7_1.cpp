#include<iostream>
using namespace std;
int fact(int);
int main()
{
	
	cout<<fact(6);

}

int fact(int n)
{
	int m;
	if(n==0||n==1)
		return n;
	else{
		m = n * fact(n-1);
		if(m!=720){
			cout<<m<<" ";
		}
		return m;	
	}
}