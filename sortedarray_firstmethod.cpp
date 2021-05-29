#include <iostream>
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
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
	return 0;
}
