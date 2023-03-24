#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m, a;
    cin>>n>>m>>a;
    long long int d,e;
    if(n%a == 0)
        d = n/a;
    else
        d = (n/a) +1;

    if(m%a == 0)
        e = m/a;
    else
        e = (m/a) +1;
    

    cout<<d*e<<endl;    
}