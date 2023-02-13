#include<iostream>
using namespace std;

int SearchSqrt( int n ){

int s=0;
int e = n;
int mid =(s+e)/2;
int mainans=0;

while(s<=e){ 
    int sq= mid*mid;
if(sq==n){
    return mid;
}
if(sq<n){
    mainans=mid;
    s=mid+1;
}
else{
    e=mid-1;
}
mid=(s+e)/2;
}
return mainans;
}

int main(){
int n;
cout<<"Enter the number:"<<endl;
cin>>n;
cout<<"Square Root Is:"<<endl;
int sqrt=SearchSqrt(n);
cout<<sqrt<<endl;
}
