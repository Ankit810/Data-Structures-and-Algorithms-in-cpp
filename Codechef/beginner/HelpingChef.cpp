#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int T, N=0;
    cin>>T;
    while(T--)
    {
        cin>>N;
        if(N<10)
            cout<<"Thanks for helping Chef!\n";
        else
            cout<<-1<<endl;
    }

    return 0;

}