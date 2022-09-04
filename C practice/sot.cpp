#include<iostream>
using namespace std;
int partition(int a[],int s,int e){
	int i=s;
	int pivot=a[e];
	for(int j=s;j<=e-1;j++){
		if(a[j]<pivot){
			swap(a[i],a[j]);
			i++;
		}
	}
	swap(a[i],a[e]);
	return i;
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
	int a[]={3,6,9,5,7,2};
	quicksort(a,0,5);
	for(int i=0;i<=5;i++){
		cout<<a[i];
	}
	return 0;
}
