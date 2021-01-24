#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, m, maxbudget, cost;
    cin>>n>>m;
    multiset<ll, greater<int>> tickets;
    for(int i=0; i<n; i++){
        cin>>cost;
        tickets.insert(cost);
    }
    for(int i=0; i<m; i++){
        cin>>maxbudget;
        auto iterator = tickets.lower_bound(maxbudget);
        if(iterator==tickets.end())
            cout<<-1<<endl;
        else{
            cout<<*iterator<<endl;
            tickets.erase(iterator);
        }
    }
    return 0;
}