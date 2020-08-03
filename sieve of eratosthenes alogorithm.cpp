
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no:"<<endl;
	cin>>n;
	int arr[10000];
	for(int i=1;i<=n;i++)
	{
		arr[i]=1;
	}
	for(int i=2;i*i<n;i++)
	{
		if(arr[i]==1)
		{
			for(int j=i*i;j<=n;j=j+i)
			{
				arr[j]=0;
			}
			
		}
	}
	for(int k=2;k<=n;k++)
	{
		if(arr[k]==1)
		{
			cout<<k<<" ";
		}
	}
	return 0;
	
}
