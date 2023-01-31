#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 long aVeryBigSum(int ar[],int size){
     long sum=0;
     for(int i=0;i<size;i++){
         sum=sum+ar[i];
     }
     return sum;
 }


int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i= 0;i<n ; i++)
    {
        cin>>ar[i];
    }
    long aVeryBigSum1= aVeryBigSum(ar,n);
    cout<<aVeryBigSum1;
    
}
