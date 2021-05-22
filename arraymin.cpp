#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//length of the array
	cin>>n;//read n
	int arr[n];//declare the array of n length
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//find  min element
	int min=arr[0];
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(min>=arr[i])
		{
			min=arr[i];
			count++;
		}
	}
	cout<<"min value:"<<min;
	cout<<"count:"<<count;
}
