#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

int t, i;
cin>>t;

while(t--){
	vector<ll> x,y;
	ll n;
	cin>>n;
	while(n--){
		ll a, b;
		cin>>a>>b;
		x.push_back((ll)min(a,b));
		y.push_back((ll)max(a,b));
	}
	ll res=0;
	for(i=0; i<x.size(); i++){
		res+=x[i];
	}

	sort(y.begin(), y.end());
	ll temp = y[y.size()-1];
	cout<<(temp*2)+(res*2)<<endl;
}

return 0;


}
