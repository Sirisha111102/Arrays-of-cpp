#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	vector<int>ve={2,12,20,24};
	int x=20,y;
	auto it=find(ve.begin(),ve.end(),x);
	if(it!=ve.end())
	{
	    ve.erase(it);
	    for(auto it:ve)
	    {
	        cout<<it<<" ";
	    }
	}
	else
	{
	    cout<<"Element not found";
	}
	return 0;
}
