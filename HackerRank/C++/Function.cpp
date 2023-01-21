#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d){
        return a;
    }
    else if (b>a && b>c && b>d){
        return b;
    }
    else if (c>a && c>b && c>d){
        return c;
    }
    else {
        return d;
    }
}

int main() {

int finalresult=max_of_four();
cout<<finalresult;
}
