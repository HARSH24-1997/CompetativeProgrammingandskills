
#include<bits/stdc++.h>
using namespace std;

long long int recall(int a,int b,long long int count){
       while(a<=b){
           int temp = a;
           while(temp){
               temp = (temp & (temp-1));
               count++;
           }
           a++;
       }
       return count;
}


int main() {
    int Q,a,b;
    cin>>Q;
    while(Q--){
        cin>>a>>b;
        long long int count=0;
        count=recall(a,b,count);
        cout<<count<<endl;
    }
	return 0;
}
