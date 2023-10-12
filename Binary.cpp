#include<stdio.h>
#include<iostream>
using namespace std;

struct array{
	int A[10];
	int size;
	int length;
};

int BinSearch(struct array *arr,int l,int h,int key){
	while(l<=h){
		int mid;
		mid=(l+h/2);
		if(key==arr->A[mid])
			return mid;
		else if (key<arr->A[mid])
			h=mid-1;
		else
			l=mid+1;
	}
	return -1;
}

int main(){
	struct array arr={{2,3,4,5,6},10,5};
	cout<<BinSearch(&arr,0,arr.length,10)<<endl;
	
}
