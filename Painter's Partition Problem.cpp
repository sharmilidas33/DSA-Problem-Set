#include<iostream>
using namespace std;
bool isPossibleSoln(int arr[], int n, int k,int mid){
	int painter=1;
	int boardsPainted=0;
	
	for(int i=0;i<n;i++){
		if(boardsPainted+ arr[i]<=mid){
			boardsPainted+= arr[i];
		}
		else{
			painter++;
			if(painter>k || arr[i]>mid){
				return false;
			}
			boardsPainted= arr[i];
		}
	}
	return true;
}
int PaintersPartition(int arr[],int n, int k){
	int low=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum= sum+arr[i];
	}
	int high=sum;
	int mid=low+(high-low)/2;
	int ans=-1;
	
	while(low<=high){
		if(isPossibleSoln(arr,n,k,mid)){
			ans=mid;
			high= mid-1;
		}
		else{
			low=mid+1;
		}
		mid=low+(high-low)/2;
	}
	return ans;
}
int main(){
	int arr[]={5,5,5,5};
	int n=sizeof(arr)/sizeof(int);
	int k=2; //You can given user input using cin also.
	cout<<PaintersPartition(arr,n,k);
}
