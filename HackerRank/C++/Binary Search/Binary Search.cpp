#include<iostream>
using namespace std;

int binarysearch(int arr[] ,int size,int key){
int start=0;
int end=size-1;

int mid=(start+end)/2;
while(start<=end){
    if(arr[mid]==key){
        return mid;

    }

    // for accessing right side of array.
    if(key>arr[mid]){
start=mid+1;
    }

    // for accessing right side of array.
    else{
        end=mid-1;
    }
    //Update the value of mid.
  mid=(start+end)/2;

}
return 0;
}

int main(){

    cout<<"-------- BINARY SEARCH ------"<<endl;
// Make sure we have an ordered array.

int oa[10]={10,25,30,42,45,90,105,150,200,800};
int found=binarysearch(oa,10,90);
cout<<"The Index Is: "; 
cout<<found;
}
