#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tes;
    cin>>tes;
    for(int i=0; i<tes; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            int d = (b>c)?b:c;
            cout<<d<<endl;
        }
        if(b>a && b>c)
        {
            int d = (a>c)?a:c;
            cout<<d<<endl;
        }
        if(c>b && a<c)
        {
            int d = (a>b)?a:b;
            cout<<d<<endl;
        }
    }
    return 0;
}