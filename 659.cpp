#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin>>n>>a>>b;

    b = b%n;
    if(b>=0)
    {
        int k = (b+a)%n;
        if(k == 0)
            cout<<n<<endl;
        else
            cout<<k<<endl;
    }
    else
    {
        if(b+a == 0)
            cout<<n<<endl;
        else
        {
            int k = ((n + b)+a)%n;
            cout<<k<<endl;
        }
    }

}