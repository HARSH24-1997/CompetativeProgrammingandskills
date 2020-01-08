
#include<bits/stdc++.h>

using namespace std;


int main() {
	int n,a,A=0;
    cin>>n;
    vector<int>arr;
    while(n--){
        cin>>a;
        arr.push_back(a);
        A=A^a;
    }
    int temp=A,pos=0;
    while((temp&1)==1){
        temp = temp>>1;
        pos++;
    }
    int l=1;
    int mask = 1>>pos;
    int flag=0;
    n=arr.size();
    for(int i=0;i<n;i++){
        if((mask^arr[i])>0){
            flag=flag^arr[i];
        }
    }
    cout<<flag<<" ";
    flag=A^flag;
    cout<<flag;
}
