#include <iostream>
using namespace std;

int main(){
    int k, n;
    cin>>k>>n;

    int total=0;

    for (int i=0; i<n; i++){
        long long int t;
        cin>>t;
        if(t%k==0)
        total+=t;
        
        else
        total=total;
    }

    cout<<total<<endl;
}