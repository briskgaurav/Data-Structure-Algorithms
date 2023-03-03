#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int extra;
    vector <int> a;
    for(int i=0;i<n;i++){
        cin>>extra;
        a.push_back(extra);
    } 
    sort(a.begin(),a.end());
    for( auto  x:a)
        cout<<x<<" ";
    
    return 0;
}
