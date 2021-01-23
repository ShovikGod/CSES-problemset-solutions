#include<bits/stdc++.h>
using namespace std;
int main(){
	string seq;
	cin>>seq;
	long long l = seq.length();
	char c;
    long long count, max=1;
    for(long long i=0; i<l-1; ){
		c=seq[i];
 		count=1;
		for(long long j=i+1; j<l; j++){
			if(c==seq[j])
                count++;
			else
                break;
        }
		max=(count>max)?count:max;
        i+=count;
	}
	cout<<max<<endl;
	return 0;
}