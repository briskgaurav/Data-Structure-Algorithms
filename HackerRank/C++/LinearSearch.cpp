#include<iostream>
using namespace std;

void accessarray( int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printarray(int arr[], int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
}

bool LinearSearch(int arr[], int size,int key){
for (int i =0;i<size;i++){
    if (arr[i]==key){
        return 1;
    }
    }
    return 0;
}

int main(){
 int n;
 cout<<"enter array size ";
 cin>>n;

 int arr[n];

accessarray(arr,n);
int key;
cout<<"enter search element ";
cin>>key;
bool Present = LinearSearch(arr,n,key);
    if (Present){
        cout<<"Found";
    }
    else{
 cout<<"not found";
    }
   
}

