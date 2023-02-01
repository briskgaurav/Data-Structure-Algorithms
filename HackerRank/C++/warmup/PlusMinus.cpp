void plusMinus(vector<int> arr) {
    //float n,p,z;
    float neg=0,pos=0,zero=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            neg++;
        }
        else if(arr[i]==0){
            zero++;
        }
        else if (arr[i]>0){
            pos++;
        }
    }
    cout<<setprecision(5);
    cout<<pos/arr.size()<<endl<<neg/arr.size()<<endl<<zero/arr.size();
}
