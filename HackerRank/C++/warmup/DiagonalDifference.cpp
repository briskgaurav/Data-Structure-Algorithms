#include <bits/stdc++.h>

using namespace std;
int main(){
    int a;
    cin>>a;
    int sum=0;
    int sum2=0;
    int arr[a][a];
    for(int i=0;i<a;i++ ){
       for(int j=0;j<a;j++){
           cin>>arr[i][j];
       }
}
//     for(int i=0;i<a;i++ ){
//        for(int j=0;j<b;j++){
//            cout<<arr[i][j]<<"  ";
//        }
//        cout<<endl;
// }
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
      if(i==j){
      sum=sum+arr[i][j];
      }
        
    }
}
for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
    if((i+j)==(a-1)){
  sum2=sum2+arr[i][j];
}
}
}

int Diagonal=0;
if(sum>sum2){
    Diagonal=sum-sum2;
}
else{
    Diagonal=sum2-sum;
}
cout<<Diagonal;

return 0;
}
