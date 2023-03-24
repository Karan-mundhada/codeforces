#include <bits/stdc++.h>
using namespace std;

int budget(int arr[], int n, int key)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] <= key)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i = 0; i < n; i++)
    {
        cin>>price[i];
    }
    int day;
    cin>>day;
    long long int money[day];
    for(int i = 0; i < day; i++)
    {
        cin>>money[i];
    }
    for(int i = 0; i < day; i++)
    {
        cout<<budget(price, n, money[i])<<endl;
    }
}