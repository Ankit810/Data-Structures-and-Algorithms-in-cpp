#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int T, num=0, sum=0;
    cin>>T;
    while(T--)
    {
        cin>>num;
        sum=num/2-1;
        if(sum<1)
        {
            cout<<0<<endl;
        }
        else
        {
            int tri=0;
            while(sum>0)
            {
                tri+=sum;
                sum--;
            }
            cout<<tri<<endl;
        }
        
    }

}