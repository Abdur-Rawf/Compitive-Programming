#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x,y;
    cin>>x;
    int a=x;
    cin>>y;

    int b=y;
    if(a==b)
        cout<<"="<<endl;
    else if(a>b)
        cout<<">"<<endl;
    else if(a<b)
        cout<<"<"<<endl;

    return 0;
}


