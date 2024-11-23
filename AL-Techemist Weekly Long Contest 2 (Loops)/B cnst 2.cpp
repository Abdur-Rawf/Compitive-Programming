#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,i,cnt=0,l=0;
    cin>>n>>c;
    int ar[n];
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=1;i<n;i++){
        if((ar[i]-ar[l])>=c){
             cnt++;
             l=i;
        }

    }
    cout<<cnt+1<<endl;
    return 0;
}
