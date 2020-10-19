#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int T, A=0, B=0, C=0;
    cin>>T;
    while(T--)
    {
        cin>>A>>B>>C;
        if((A+B+C)==180)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;

}