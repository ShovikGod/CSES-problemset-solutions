#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin>>n;
    if(n==1)
        cout<<"1"<<endl;
    else if(n==2 || n==3)
        cout<<"NO SOLUTION"<<endl;
    else{
        if(n%2==0){
            for(ll i=2; i<=n; i+=2)
                cout<<i<<" ";
            for(ll i=1; i<=n-1; i+=2)
                cout<<i<<" ";
        }
        else{
            for(ll i=2; i<=n-1; i+=2)
                cout<<i<<" ";
            for(ll i=1; i<=n; i+=2)
                cout<<i<<" ";
        }
    }
    return 0;
}