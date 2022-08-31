#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int d,e,f;
	    d=max(a,b);
	    e=max(a,c);
	    f=max(b,c);
	    if(d!=e && d!=f){
	        cout<<d<<endl;
	    }
	    else if(e!=f && e!=d){
	        cout<<e<<endl;
	    }
	    else if(f!=e && f!=d){
	        cout<<f<<endl;
	    }
	}
	return 0;
}