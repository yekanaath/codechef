#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int y;
        cin>>y;
        int c;
        cin>>c;
        if(x<=y*c)
	    cout <<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
