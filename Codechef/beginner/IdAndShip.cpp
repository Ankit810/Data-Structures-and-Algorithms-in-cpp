#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    char ID;
    cin>>T;
    
    while(T--)
    {
        cin>>ID;
        if(ID=='B' or ID=='b')
            cout<<"BattleShip\n";
        else if(ID=='C' or ID=='c')
            cout<<"Cruiser\n";
        else if(ID=='D' or ID=='d')
            cout<<"Destroyer\n";
        else
            cout<<"Frigate\n";
    }  
    return 0;
}