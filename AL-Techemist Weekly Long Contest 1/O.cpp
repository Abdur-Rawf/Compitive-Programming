#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,x4,a,b,c,d;
    cin>>x1>>x2>>x3>>x4;

    a=max({x1,x2,x3,x4})-x1;
    b=max({x1,x2,x3,x4})-x2;
    c=max({x1,x2,x3,x4})-x3;
    d=max({x1,x2,x3,x4})-x4;
    if(a==0)
        cout<<b<<" "<<c<<" "<<d<<endl;
    else if(b==0)
        cout<<a<<" "<<c<<" "<<d<<endl;
    else if(c==0)
        cout<<a<<" "<<b<<" "<<d<<endl;
    else
        cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}

