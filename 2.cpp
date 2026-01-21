#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;

    cout<<"Name String"<<endl;
    string s1, s2, s3, s4;

    cin>>s1>>s2>>s3>>s4;

    if(n==0 || n>4){
        cout<<"YES"<<endl;
        cout<<"Prince is Criminal"<<endl;
    }
    else if(s1=="Prince"){
        cout<<"YES"<<endl;
    }
    else if(s2=="Prince"){
        cout<<"YES"<<endl;
    }
    else if(s3=="Prince"){
        cout<<"YES"<<endl;
    }
    else if(s4=="Prince"){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
        cout<<"Prince is Innocent"<<endl;
    }

return 0;

}