#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, palin=0, num=0, rem=0, holder=0;
    cin>>T;
    
    while(T--)
    {
        cin>>num;
        holder=num;
        while(num>0)
        {
            rem=num%10;
            palin=palin*10+rem;
            num=num/10;
        }
        if(palin==holder)
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"loses"<<endl;    
        }
        rem=palin=0;
    }

    
    return 0;
}