#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	cin >> t;
	for(int i=0;i<t;i++) {
	    cin >> n >> x;
	    if ( n-x >x) {
	        cout << x << endl;
	    }
	    else
	        cout << n-x << endl;
	    
	}
	return 0;
}
