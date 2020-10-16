#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,x;
    cin>>t;
    vector<int> vect;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        vect.push_back(x);
    }
    sort(vect.begin(),vect.end());
    for (int a : vect){
        cout<<a<<endl;
    }

}