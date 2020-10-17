#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, counter=0;
    string s;
    char ch='4';
    cin>>T;
    while(T--)
    {
        cin>>s;
        counter = count(s.begin(),s.end(), ch);
        cout<<counter<<endl;
        counter=0;
    }
    return 0;
}