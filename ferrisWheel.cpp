#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, i, j, count=0;
    cin>>n>>x;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    i=0; j=n-1;
    while(i<=j){
        if(arr[i]+arr[j] <= x)
        {    i++;j--;count++; }
        else
        {   j--;count++; }
    }
    cout<<count<<endl;
    return 0;
}