#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t][3];
    for(int i=0; i<t; i++)
    {
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    int x,y,z;
    for(int i=0; i<t; i++)
    {
        x = x + arr[i][0];
        y = y + arr[i][1];
        z = z + arr[i][2];
    }
    if(x==0 && y==0 && z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}