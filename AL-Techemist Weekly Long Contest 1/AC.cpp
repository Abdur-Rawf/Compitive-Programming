#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%100==0)
        n=n-1;
    cout<<n/100+1;
    return 0;
}



