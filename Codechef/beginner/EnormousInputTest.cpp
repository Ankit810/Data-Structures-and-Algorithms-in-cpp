#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0, count =0, div=0, x;
    cin>>n>>div;
    while(n!=0){
    
        cin>>x;
        if(x%div == 0)
        {
            count++;
        }
        n--;
    }
    cout<<count;
    return 0;
}