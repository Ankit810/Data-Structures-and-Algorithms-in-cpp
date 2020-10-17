#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, num, sqroot=0;
    cin>> T;

    while(T--)
    {
        cin>>num;
        cout<<int(pow(num, 0.5))<<endl;
    }

    return 0;
}

