#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,x;
    for(i=1;i<=5;i++)
    {
        cin>>a>>b>>c>>d>>e;
        if((a==1||e==1)&&i<=3)
            x=2+(3-i);
        if((b==1||d==1)&&i<=3)
            x=1+(3-i);
        if(c==1&&i<=3)
            x=0+(3-i);
        if((a==1||e==1)&&i>=3)
            x=2+(i-3);
        if((b==1||d==1)&&i>=3)
            x=1+(i-3);
        if(c==1&&i>=3)
            x=0+(i-3);

    }
    cout<<x<<endl;

    return 0;
}


