#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],i,j;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]<=k)
            {
                k=k-a[i];
                a[i]=1;
            }
            else
            {
                a[i]=0;
            }
        }
        for(i=0;i<n;i++)
        cout<<a[i];
        cout<<endl;
    }
	return 0;
}
