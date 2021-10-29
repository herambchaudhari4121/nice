#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int N,M,K;
	    cin>>N>>M>>K;
	    if(abs(N-M)<=K)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        cout<<abs(N-M)-K<<endl;
	    }
	}
	return 0;
}
