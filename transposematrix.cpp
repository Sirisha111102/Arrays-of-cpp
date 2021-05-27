#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[100][100];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
}

