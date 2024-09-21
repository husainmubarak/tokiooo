#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin>>n>>d;
    int x[n], y[n];

    for(int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i];
    }

    int p = x[0], q = y[0];
    for(int i = 0; i < n; i++)
    {
        if(pow(pow((x[i] - p), 2) + pow((y[i] - q), 2), 0.5) <= d)
        {
            p = x[i];
            q = y[i];
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

}