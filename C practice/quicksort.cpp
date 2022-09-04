#include<iostream>
using namespace std;
int partition(int a[],int s,int e){
	int sum=0;
	int pivot =a[e];
	for(int i=s;i<=e;i++){
		if(a[s]<pivot){
			sum=sum+1;
		}
	}
	int k=sum+s;
	swap(a[k],pivot);
	int j=e;
	int i=s;
	while(i<=k && j>=k){
		if(a[i]>pivot && a[j]<pivot){
			swap(a[i],a[j]);
			i++;
			j--;
		}else{
			i++;
			j--;
		}
	}
	return k;
}
void quicksort(int a[],int s,int e){
	if(s>=e){
		return;
	}
	int p=partition(a,s,e);
	quicksort(a, s,p-1);
	quicksort(a, p+1, e);	
}

int main() {
	int a[]={7,2};
	quicksort(a,0,1);
	for(int i=0;i<=1;i++){
		cout<<a[i];
	}
	return 0;
}
