#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int T, n=0, count=0;
	cin>>T;
	while(T--)
	{
	    cin>>n;
	    int arr[] = {1,2,5,10,50,100};
	    for(int i=5;i>=0;i--)
	    {
	        count+=n/arr[i];
	        n=n%arr[i];
	    }
	    cout<<count<<endl;
	    count =0;
	}
	return 0;
}