#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,arr[n],flag=1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
	    if(arr[i]>arr[i+1])
	    {
	        flag=0;
	        break;
	    }
	}
	if(flag==1)
	{
	    cout<<"Sorted";
	}
	else
	{
	    cout<<"Not Sorted";
	}
	
	return 0;
}
