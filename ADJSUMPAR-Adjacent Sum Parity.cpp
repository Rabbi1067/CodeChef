#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>x(n);
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]==1) cnt++;
    }
    if(cnt%2==0) cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
