#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    int length= a.size();
    int length2= b.size();
    cout<<length<<" "<<length2<<endl;
    string add=a+b;
  cout<<add<<endl;
  char t1=a[0];
  char t2=b[0];
  a[0]=t2;
  b[0]=t1;
  cout<<a<<" "<<b;
    return 0;
}
