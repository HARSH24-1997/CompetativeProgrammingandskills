#include<bits/stdc++.h>
using namespace std;
int main () {
    int x,y;
    cin>>x>>y;
    vector<int>X(64,0);
    vector<int>Y(64,0);
    vector<int>ans;
    int j,i=0;
    while(x>0){
        j=(x&1);
        X[i]=j;
        x=x>>1;
        i++;
    }
   int k=0;
    while(y>0){
        j=(y&1);
        Y[k]=j;
        y=y>>1;
        k++;
    }
    int flag=0;
    for(int z=k;z>=0;z--){
        if((X[z]^Y[z])!=1){
            if(flag==1 && X[z]==1){
                X[z]=1;
                ans.push_back(1);
            }
            else if(flag==1 && X[z]==0){
                Y[z]=1;
                ans.push_back(1);
            }
            else if(flag==0){
                ans.push_back(0);
            }
        }
        else{
            ans.push_back(1);
            flag=1;
        }
    }
    int A=0,temp=0;
    for(int z=k;z>=0;z--){
        A+=pow(2,temp)*ans[z];
        temp++;
    }
        cout<<A;
	return 0;
}
