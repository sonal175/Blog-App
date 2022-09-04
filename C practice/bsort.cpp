#include<iostream>
using namespace std;
void bubllesort(int a[],int n){
	
	for(int i=1;i<=n-1;i++){
		int flag=0;
		
		for(int j=0;j<=n-2;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				flag=1;
			}
		}
		
		if(flag==0){
			break;
		}
	}
	
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubllesort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}
