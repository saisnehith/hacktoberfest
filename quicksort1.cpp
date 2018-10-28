#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

int sai(const void *a,const void *b){
	if(*(int*)a<*(int*)b)
		return -1;
	else if(*(int*)a==*(int*)b){
		return 0;
	}
	else
		return 1;
}

int main(){
	int n,i,j,a[100005];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	qsort(a,n,sizeof(int),sai);
	for(i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}
