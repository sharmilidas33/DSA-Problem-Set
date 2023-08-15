#include<iostream>
using namespace std;

//m is total no of students and n is total no of books.
bool isPossible(int arr[],int n,int m, int mid){
	
	int sc=1; //StudentCount
	int ps=0; //PageSum
	
	for(int i=0;i<n;i++){
		if(ps+arr[i]<= mid){
			ps+=arr[i];
		}
		else{
			sc++;
			if(sc>m || arr[i]>mid){
				return false;
			}
			ps+=arr[i];
		}
	}
	return true;
}

int allocateBooks(int arr[], int n, int m){
	int low=0;
	int sum=0;
	
	for(int i=0;i<n;i++){
		sum += arr[i]; 
	}
	int high= sum;
	int mid=low+(high-low)/2;
	int ans=-1;
	
	while(low<=high){
		if (isPossible(arr,n,m,mid)){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
		mid=low+(high-low)/2;
	}
	return ans;
}
int main(){
	int arr[]={10,20,30,40};
	int n= sizeof(arr)/sizeof(int);
	int m;
	cout<<"Enter no. of Students: ";
	cin>>m;
	
	cout<<"Answer is "<<allocateBooks(arr,n,m)<<endl;
}

