#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int T, a[3];
    cin>>T;
    while(T--)
    {
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        sort(a, a+3);
        cout<<a[1]<<"\n";
    }
    return 0;
}