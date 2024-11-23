#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,tnl,tnp,tcd,ts,num;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    tnl=(k*l)/nl;
    tcd=(c*d);
    ts=p/np;
     num= min({tnl,tcd,ts});
    cout<<num/n<<endl;

    return 0;
}
