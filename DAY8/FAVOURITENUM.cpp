#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if((a%2==0) && (a%7==0))
        cout<<"ALICE"<<endl;
        else if((a%2 !=0) && (a%9==0))
        cout<<"BOB"<<endl;
        else
        cout<<"CHARLIE"<<endl;
    }
    
	// your code goes here
	return 0;
}
