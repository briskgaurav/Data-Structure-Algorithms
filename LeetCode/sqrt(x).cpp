class Solution {
public:

long binarysearch(int n){
    long s=0;
    long e=n;
    long mid=(e+s)/2;
    long solu=0;
    while(s<=e){
        long sq=mid*mid;
        if(sq==n){
            return mid;
        }
        if(sq<n){
            solu=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=(e+s)/2;
    }
   return solu;
}
    int mySqrt(int x) {
        return binarysearch(x);
    }
};
