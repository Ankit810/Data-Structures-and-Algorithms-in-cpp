#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int T, a=0, b=0;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        if(a>b)
            cout<<">"<<endl;
        else if(a<b)
            cout<<"<"<<endl;
        else
        {
            cout<<"="<<endl;
        }
    }
    return 0;
}