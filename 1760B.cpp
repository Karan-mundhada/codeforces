#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tes;
    cin>>tes;
    for(int i=0; i<tes; i++)
    {
        int s;
        cin>>s;
        char ch[s];
        cin>>ch;
        int ma = 0;
        for(int i : ch)
        {
            ma = max(ma, (i-96));
        }
        cout<<ma<<endl;
    }
}