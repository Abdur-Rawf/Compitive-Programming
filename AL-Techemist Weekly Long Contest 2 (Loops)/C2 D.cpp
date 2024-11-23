#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,t;
    cin>>t;
    while(t--)
    {
      int a,b,c;
      cin>>a>>b>>c;
      if((a==0&&b==0)||(b==0&&c==0)||(a==0&&c==0))
            cnt=cnt;
      else
        cnt++;

    }
    cout<<cnt<<endl;
    return 0;
}
