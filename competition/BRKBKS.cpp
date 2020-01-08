#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    int S,X,Y,Z;
    while(T--){
    cin>>S>>X>>Y>>Z;
    if(X+Y+Z<=S){
        cout<<1<<endl;
    }
    else if(X+Y<=S || Y+Z<=S ){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }
    }
}
