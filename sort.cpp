#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(8);
    v.push_back(10);
    v.push_back(16);

    sort(v.begin(), v.end());

    int k=(int)v.size();

    for (int i=0; i<k; i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

}