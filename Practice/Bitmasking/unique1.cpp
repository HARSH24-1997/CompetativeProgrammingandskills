
#include <bits/stdc++.h>

using namespace std;
int main()
 {
	int N,A=0,B;
    cin>>N;
    while(N--){
        cin>>B;
        A=A^B;
    }
    cout<<A;
}
