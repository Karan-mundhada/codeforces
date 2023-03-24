#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tes;cin >> tes;
    while(tes--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        int ans[n];
        ans[0] = s-r;
        int i = 1;
        int k = n-1;
        while(i < n)
        {
            ans[i] = r/k;
            r = r - ans[i];
            k--;
            i++;
        }
        for(int i = 0; i < n; i++)
        {
            cout<<ans[i]<<endl;
        }
    }
}