#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b==2*a||(b==2*a+1)||(a==2*b)||(a==2*b+1))
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}

