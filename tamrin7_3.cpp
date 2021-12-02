#include<iostream>
#include<conio.h>
using namespace std;
int binsearch_rec(int low,int high,int x,int s[])
{
	int mid;
	if(low>high)
	return (-1);
	else
	{
		mid=(low+high)/2;
	if(x==s[mid])
		return mid;
	else if (x<s[mid])
	return binsearch_rec(low,mid-1,x,s);
	else
		return binsearch_rec(mid+1,high,x,s);
}
}
int main(){
	int i,x,z,l=0,h=10,s[10];
	cout<<"Enter the 10-digit order"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"number "<<i+1<<" :";
		cin>>s[i];
	}
	cout<<"Enter the number Search"<<endl;
	cin>>x;
	z=binsearch_rec(l,h,x,s);
	if(z==(-1))
		cout<<"Not found";
	else
		cout<<"The place is :"<<z+1;
	getch();
	return 0;
}
