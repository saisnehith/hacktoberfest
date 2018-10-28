#include<bits/stdc++.h>

using namespace std;

int main( ){
	int n,i,j,k,a[100005];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=1;i<n;i++){
		for(j=i;j>0;j--){
			if(a[j]<a[j-1]){
				swap(a[j],a[j-1]);
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}
