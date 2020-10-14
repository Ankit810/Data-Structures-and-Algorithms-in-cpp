#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, x=0, sum=0, rem =0;
    cin>>T;
    while(T--)
    {
        cin>>x;
        while(x>0)
        {
            rem=x%10;
            sum+=rem;
            x=x/10;
        }
        cout<<sum<<endl;
        rem=sum=0;
    }
    
    return 0;
}
