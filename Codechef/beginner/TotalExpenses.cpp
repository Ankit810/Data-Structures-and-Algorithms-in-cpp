#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	double qty,price;
	double result;
	
	cin>>t;
	while(t--)
	{
	    
	    cin>>qty>>price;
	    if(qty<=1000)
	        result=qty*price;
	    else 
	        result=0.9*qty*price;
	    cout<<fixed<<setprecision(6)<<result<<endl;
	    
	}
	return 0;
}