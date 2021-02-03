#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll t,x,y;
    cin>>t;
    while(t>0){
        cin>>y>>x;
        ll m,ans,ap;
        m=max(x,y);
        ap=m*(m-1)+1;
        if(m%2==0)
            ans=ap+y-x;
        else
            ans=ap+x-y;
        cout<<ans<<"\n";
        t--;
    }
    return 0;
}