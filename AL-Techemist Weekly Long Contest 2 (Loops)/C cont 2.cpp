#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            for(k=0;k<=n;k++){
                if((i+j+k)<=n)
                cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }

    return 0;
}
