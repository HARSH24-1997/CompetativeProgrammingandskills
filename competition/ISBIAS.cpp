#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,Q,A,temp;
    cin>>N>>Q;
    vector<int>arr;
    vector<int>Minarr(N,0);
    vector<int>Maxarr(N,0);
    temp=N;
    while(temp--){
        cin>>A;
        arr.push_back(A);
    }
    for(int i=1;i<N;i++){
        if(arr[i]>arr[i-1]){
            Maxarr[i]=Maxarr[i-1]+1;
        }
        else{
            Maxarr[i]=Maxarr[i-1];
        }
    }
    for(int i=1;i<N;i++){
        if(arr[i]<arr[i-1]){
            Minarr[i]=Minarr[i-1]+1;
        }
        else{
            Minarr[i]=Minarr[i-1];
        }
    }
    int X,Y;
    while(Q--){
        cin>>X>>Y;
        if(X==1){
            if(Minarr[Y-1]==Maxarr[Y-1]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            int flag1=Maxarr[Y-1]-Maxarr[X-1];
            int flag2=Minarr[Y-1]-Minarr[X-1];
            if(flag1==flag2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
