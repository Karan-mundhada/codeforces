#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tes; cin>>tes;
    while(tes--)
    {
        long long int n; cin>>n;
        if(n == 1)
            cout<<0<<endl;
        else
        {
            n = sqrt(n-1);
            cout<<n<<endl;
        }
    }
}