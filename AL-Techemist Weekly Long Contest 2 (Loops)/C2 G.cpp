#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,k,i,cnt=0;
    cin>>a>>k;
    int ar[a];
    for(i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    k=ar[k-1];
    for(i=0;i<a;i++)
    {
       if(k<=ar[i]&&ar[i]!=0)
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


