#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n=0;
    cin>>x;
    n=x/100;
    x=x%100;
    n+=x/20;
    x=x%20;
    n+=x/10;
    x=x%10;
    n+=x/5;
    x=x%5;
    n+=x;
    cout<<n<<endl;

    return 0;
}





