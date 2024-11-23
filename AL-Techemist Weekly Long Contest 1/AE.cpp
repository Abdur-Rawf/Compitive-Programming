#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,mx;
    cin>>a>>b>>c;
    mx=a+b;
    if(a+c>mx)
        mx=a+c;
    if(b+c>mx)
        mx=b+c;
    cout<<mx<<endl;

    return 0;
}





