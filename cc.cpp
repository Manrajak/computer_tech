
#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n = 0, k = 0;
	    string s;
	    cin>>n>>k>>s;
	    int i = k;
	    if( s.at(0) == '0'){
	        k = k-1;
	        s.at(0) = '1';
	        
	    }
	    while(k--){
	        s.push_back('0');
	    }
	    cout<<s<<endl;
	}
	return 0;
}