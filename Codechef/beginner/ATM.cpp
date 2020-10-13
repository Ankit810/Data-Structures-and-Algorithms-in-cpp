#include<bits/stdc++.h>
using namespace std;

int main()
{
    float initial_acc=0;
    int withdraw=0;
    cin>>withdraw>>initial_acc;
    
    //Checking if withdraw amount + transaction charges is greater than initial account balance
    if(withdraw+0.5>initial_acc){
        printf("%.2f",initial_acc);
        return 0;
    }
    //Checking if withdraw amount is a multiple of 5
    if(withdraw%5!=0)
    {
        printf("%.2f",initial_acc);
    }
    else
    {
        printf("%0.2f", initial_acc-withdraw-0.5);
    }
    
    return 0;
}