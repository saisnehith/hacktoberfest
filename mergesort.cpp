#include<bits/stdc++.h>

using namespace std;

void merge(int a[],int l,int m,int r){
	int i,j,n1,n2,l1=0,l2=0,p=0;
	n1=m-l+1;
	n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++){
		L[i]=a[l+i];
	}
	for(i=0;i<n2;i++){
		R[i]=a[m+1+i];
	}
	while(l1<n1 and l2<n2){
		if(L[l1]<R[l2]){
			a[l]=L[l1];
			l1++;
		}
		else
		{
			a[l]=R[l2];
			l2++;
		}
		l++;
	}
	if(l1<n1){
		for(i=l1;i<n1;i++){
			a[l]=L[i];
			l++;
		}
	}
	else if(l2<n2){
		for(i=l2;i<n2;i++){
			a[l]=R[i];
			l++;
		}
	}
}



void mergesort(int a[],int l,int r){
	if(l<r){
		int m=l+(r-l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}

int main( ){
	int n,i,j,k,a[100005];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	for(i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}
