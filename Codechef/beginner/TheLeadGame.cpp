#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    int rounds;
	cin>>rounds;
	int S1=0,S2=0,maxL=0,winner=0;
	while(rounds--){
	    int s1=0,s2=0,L,P;
	    cin>>s1>>s2;
	    S1+= s1;
	    S2+=s2;
	    
	    if(S1>S2){
	        L=S1-S2;
	        P=1;
	    }
	    else{
	        L=S2-S1;
	        P=2;
	    }
	    
	    if(L>maxL){
	        maxL=L;
	        winner=P;
	    }
	}
	
	cout<<winner<<" "<<maxL;
	return 0;
}
