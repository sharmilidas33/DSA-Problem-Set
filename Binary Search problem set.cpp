//First and last position of an element in sorted array.
//#include<iostream>
//using namespace std;
//int firstOcc(int arr[], int n, int element){
//	int low=0;
//	int high=n-1;
//	int ans=-1;
//
//	while(low<=high){
//		int mid= low+(high-low)/2;
//
//		if(arr[mid]==element){
//			ans=mid;
//			high=mid-1;
//		}
//		if(arr[mid]<element){
//			low= mid+1;
//		}
//		else{
//			high=mid-1;
//		}
//		mid= low+(high-low)/2;
//	}
//	return ans;
//}
//int lastOcc(int arr[], int n, int element){
//	int low=0;
//	int high=n-1;
//	int ans=-1;
//
//	while(low<=high){
//		int mid= low+(high-low)/2;
//
//		if(arr[mid]==element){
//			ans=mid;
//			low=mid+1;
//		}
//		else if(arr[mid]<element){
//			low= mid+1;
//		}
//		else{
//			high=mid-1;
//		}
//		mid= low+(high-low)/1;
//	}
//	return ans;
//}
//int main(){
//	int arr[7]={0,1,1,1,2,2,2};
//	int n= sizeof(arr)/sizeof(int);
//	int element=2;
//	int searchIndexFirst =firstOcc(arr,7,2);
//	int searchIndexLast=lastOcc(arr,7,2);
//	cout<<"The first occurance and last occurance of element "<<element<<" is present at index "<<searchIndexFirst<<" and "<<searchIndexLast<<" respectively"<<endl;
//}

//Find total no.of occurances of an element.
//#include<iostream>
//using namespace std;
//int firstOcc(int arr[], int n, int element){
//	int low=0;
//	int high=n-1;
//	int ans=-1;
//
//	while(low<=high){
//		int mid= low+(high-low)/2;
//
//		if(arr[mid]==element){
//			ans=mid;
//			high=mid-1;
//		}
//		if(arr[mid]<element){
//			low= mid+1;
//		}
//		else{
//			high=mid-1;
//		}
//		mid= low+(high-low)/2;
//	}
//	return ans;
//}
//int lastOcc(int arr[], int n, int element){
//	int low=0;
//	int high=n-1;
//	int ans=-1;
//
//	while(low<=high){
//		int mid= low+(high-low)/2;
//
//		if(arr[mid]==element){
//			ans=mid;
//			low=mid+1;
//		}
//		else if(arr[mid]<element){
//			low= mid+1;
//		}
//		else{
//			high=mid-1;
//		}
//		mid= low+(high-low)/1;
//	}
//	return ans;
//}
//int main(){
//	int arr[7]={0,1,1,1,2,2,2};
//	int n= sizeof(arr)/sizeof(int);
//	int element=1;
//	int searchIndexFirst =firstOcc(arr,7,1);
//	int searchIndexLast=lastOcc(arr,7,1);
//	int totalOccurences= (searchIndexLast-searchIndexFirst)+1;
//	cout<<totalOccurences<<endl;
//}

//Peak Index in a Mountain Array.
//#include<iostream>
//using namespace std;
//int peakIndex(int arr[], int n, int element){
//	int low=0, high=n-1;
//	while(low<high){
//		int mid= low+(high-low)/2;
//
//		if(arr[mid]<arr[mid+1]){
//			low=mid+1;
//		}
//		else{
//			high=mid;
//		}
//		mid= low+(high-low)/2;
//	}
//	return low;
//}
//int main(){
//	int arr[4]={0,10,9,0};
//	int pIndex= peakIndex(arr,4,10);
//	cout<<pIndex<<endl;
//}

//Find Pivot in an array.
//#include<iostream>
//using namespace std;
//
//int pivot(int arr[], int n) {
//	int low=0, high=n-1;
//	int mid=low+(high-low)/2;
//
//	while(low<high){
//		
//		if(arr[mid]>=arr[0]){
//				low=mid+1;
//		}
//		else{
//			high= mid;
//		}
//		mid=low+(high-low)/2;
//	}
//	return low;
//}
//	
//int main(){
//	int arr[5]= {3,6,7,1,8};
//	cout<<"Pivot is "<<pivot(arr,5)<<endl;
//}

//Search in a rotated sorted array.
//#include<iostream>
//using namespace std;
//
//int n=5;
//int low=0, high= n-1;
//int pivot(int arr[], int n, int low, int high) {
//	int mid=low+(high-low)/2;
//
//	while(low<high){
//		
//		if(arr[mid]>=arr[0]){
//				low=mid+1;
//		}
//		else{
//			high= mid;
//		}
//		mid=low+(high-low)/2;
//	}
//	return low;
//}
//int binarySearch(int arr[], int l, int h, int element){
//	
//	l= low;
//	h = high;
//	
//	int mid= low+(high-low)/2;
//	
//	while(low<=high){
//		if(arr[mid]==element){
//			return mid;
//		}
//		else if(arr[mid]<element){
//			low=mid+1;
//		}
//		else{
//			high=mid-1;
//		}
//		mid= low+(high-low)/2;
//	}
//	return -1;
//}
//int findElement(int arr[], int n, int k){
//	
//	int pivotElement = pivot(arr,n,low,high);
//	if(k>=arr[pivotElement] && k<=arr[high]){
//		return binarySearch(arr,pivotElement,n-1,k);
//	}
//	else{
//		return binarySearch(arr,0,pivotElement-1,k);
//	}
//}
//int main(){
//	int arr[5]={7,5,1,2,3};
//	cout<<"The element is present at index "<<findElement(arr,5,2)<<endl;
//}

//Square root using Binary Search.(With TC O(logn))
#include<iostream>
using namespace std;

long long int findSqrt(int num){
	int low=0, high=num;
	long long int mid= low+(high-low)/2;
	long long int  ans=-1;
	
	while(low<=high){
		long long int sqr= mid*mid;
		 
		if(sqr==num){
			return mid;
		}
		else if(sqr<num){
			ans=mid;
			low=mid+1;
		}
		else{
			high= mid-1;
		}
		mid= low+(high-low)/2;
	}
	return ans;
}

double findSqrtFloat(int num,int p, int Soln){
	double factor=1;
	double ans=Soln;
	
	for(int i=0;i<p;i++){
		factor= factor/10;
		
		for(double j=ans; j*j<num; j=j+factor){
			ans=j;	
		}
	}
	return ans;
}
int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	int Soln= findSqrt(num);
	cout<<"The square root is "<<findSqrtFloat(num,3,Soln)<<endl;
}


















