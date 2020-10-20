#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,i,flag=0;
	    cin>>a;
	    for(i=2;i<=a/2;i++)
	    {
	        if(a%i==0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if((flag==0)&&(a!=1))
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
