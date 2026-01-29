#include <iostream>
#include <sstream> 
using namespace std;

int main(){ 
    int n=1542;

    //Declare output string stream
    ostringstream str1;


    // Sending integer as a stream to output string stream
    str1 << n;

    // Declare string variable
    string s=str1.str();

    cout<<"The string is: "<<s<<endl;

    // 

    // int p;
    // cin>>p;
    // char x;
    
    // cout<<(char)p<<endl;
}