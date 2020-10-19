#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int T, A=0, B=0;
    cin>>T;
    while(T--)
    {
        cin>>A>>B;
        if(A>B)
        {
            cout<<A<<" "<<A+B<<endl;
        }
        else
        {
            cout<<B<<" "<<A+B<<endl;
        }
    }

    return 0;

}