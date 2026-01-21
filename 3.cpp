#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X, Y;
	cin>>X>>Y;
	
	float Balance=Y-X;
	
	if(X<Y){

        if(X%5==0){
	    cout<<Balance-0.5<<endl;
	}
	
	
	else{
	    cout<<Y<<endl;
	}

    }
	

}
