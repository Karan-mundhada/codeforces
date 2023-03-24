#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dub;
    cin>>dub;
    int i = 0;
    string result;
    while(i<dub.size())
    {
        if(dub[i] == 'W')
        {
            if(dub[i+2] == 'B' && dub[i+1] == 'U')
            {
                i = i+3;
                if(result.empty() == true)
                    continue;
                else if(result.back() == ' ')
                {
                    continue;
                }
                else
                    result = result + ' ';
            }
            else
            {    result = result + dub[i];
                i++;}
        }
        else{
            result = result + dub[i];
            i++;
        }
    }
    cout<<result<<endl;
}