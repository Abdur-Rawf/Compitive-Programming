#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i= floor(n*1.08);
    if(i<206)
        cout<<"Yay!"<<endl;
    else if(i==206)
        cout<<"so-so"<<endl;
    else
        cout<<":("<<endl;

    return 0;
}

