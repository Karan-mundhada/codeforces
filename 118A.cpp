#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;

    for(int i=0; i<st.size(); i++)
    {
        char c = tolower(st[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            continue;
        } 
        else
            cout<<"."<<c;
    }

    return 0;
}