#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(1<=n && n<=50) cout<<"100"<<endl;
    else if(51<=n && n<=100) cout<<"50"<<endl;
    else
    {
        cout<<"0"<<endl;
    }

    return 0;
}
