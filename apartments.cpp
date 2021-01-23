#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m, k, i, j, count=0;
    cin>>n>>m>>k;
    ll req[n], size[m];
    for(int i=0; i<n; i++)  cin>>req[i];
    for(int i=0; i<m; i++)  cin>>size[i];
    sort(req, req+n);
    sort(size, size+m);
    i=0; j=0;
    while(i<n && j<m){
		if((req[i]-k) > size[j])
            j++;
		else if((req[i]+k) < size[j])
            i++;
		else{
			i++;j++;count++;
		}
	}
    cout<<count<<endl;
    return 0;
}