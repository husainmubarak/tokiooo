#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mod;
    cin>>n;

    if(n < pow(10, 3))
    {
        mod = 0;
    }
    else if(n < pow(10, 4))
    {
        mod = n % 10;
    }
    else if(n < pow(10, 5))
    {
        mod = n % 100;
    }
    else if(n < pow(10, 6))
    {
        mod = n % 1000;
    }
    else if(n < pow(10, 7))
    {
        mod = n % 10000;
    }
    else if(n < pow(10, 8))
    {
        mod = n % 100000;
    }
    else if(n < pow(10, 9))
    {
        mod = n % 1000000;
    }
    cout<<n - mod;
}