#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
 
  int first=0;
 int last=n-1;
 while(first<last){
     swap(arr[first],arr[last]);
     first++;
     last--;
 }
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }

      
    return 0;
}
