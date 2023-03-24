#include <bits/stdc++.h>
using namespace std;

int main()
{
    int goals;
    cin>>goals;
    map <string, int> teams;
    for(int i=0; i<goals; i++)
    {
        string a;
        cin>>a;
        teams[a]++;
    }
    int i = 0;
    string as[2];
    int a[2];
    for(auto x: teams)
    {
        as[i] = x.first;
        a[i] = x.second;
        i++;
    }
    if(a[0] > a[1])
        cout<<as[0]<<endl;
    else
        cout<<as[1]<<endl;
    
}