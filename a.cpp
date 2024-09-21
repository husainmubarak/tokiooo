#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int main()
{
    int n;
    cin>>n;
    pair<int, string> org[n];

    for(int i = 0; i < n; i++)
    {
        cin>>org[i].se>>org[i].fi;
    }

    int min = org[0].fi, pat;
    for(int i = 0; i < n; i++)
    {
        if(org[i].fi <= min)
        {
            min = org[i].fi;
            pat = i;
        }
    }

    for(int i = pat; i < n; i++)
    {
        cout<<org[i].se<<endl;
        if(i == n-1)
        {
            i = -1;
        }
        if(i == pat-1)
        {
            break;
        }
    }



    
}