#include <stdio.h>
#include<iostream>
using namespace std;

void update(int *a,int *b) {
      
}

int main() {
    int a, b;
    cin>>a>>b;
    int sub;
    int sum=a+b;
    if(b>a){
         sub=b-a;
    }
    else{
         sub=a-b;
    }
    cout<<sum<<endl;
    cout<<sub;
   
    return 0;
}
