//Given an integer number n, return the difference between the product of its digits and the sum of its digits.
//#include<iostream>
//using namespace std;
//int main (){
//	int n;
//	int prod=1;
//	int sum=0; 
//	cout<<"Enter n:";
//	cin>>n;
//	while(n!=0){
//		int digit=n%10;
//		prod=prod*digit; 
//		sum=sum+digit;
//		n=n/10;
//	}
//	int ans=(prod-sum);
//	cout<<ans<<endl;
//}

//Write a function that takes an unsigned integer and returns the number of '1' bits it has.
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	int count=0;
//	cin>>n;
//	while(n!=0){
//		if(n&1){
//			count++;
//		}
//		n=n>>1;
//	}
//	cout<<count<<endl;
//}

//Reverse Integer.
//Given a signed 32 bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32 bit integer range [-2^31,2^31-1], then return 0.
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int ans=0;
//	while(n!=0){
//		int digit=n%10;
//		if((ans> INT_MAX/10)||(ans< INT_MIN/10)){
//			return 0;
//		}
//		ans=(ans*10)+digit;
//		n=n/10;
//	}
//	cout<<ans<<endl;
//}

//Compliment of Base 10 integer.
//#include<iostream>
//using namespace std;
//int main(int n){
//	int m=n;
//	cin>>n;
//	if(n==0){
//		return 1;
//	}
//	int mask=0;
//	while(m!=0){
//		mask=(mask<<1)|1;
//		m=m>>1;
//	}
//	int ans=(~n)&mask;
//	cout<<ans<<endl;
//}

//Power of Two.
//Given an integer n, return True if it is a power of two. Otherwise, return False.
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	for(int i=0;i<=30;i++){
//		int ans= pow(2,i);
//		if(ans==n){
//			return true;
//		}
//		else{
//			return false;
//		}
//	}
//}

//Swap Alternate
//#include<iostream>
//using namespace std;
//void printArray(int arr[], int n){
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}
//void swapAlternate(int arr[], int n){
//	for(int i=0;i<n;i+=2){
//		if(i+1<n){
//			int temp=arr[i];
//			arr[i]=arr[i+1];
//			arr[i+1]=temp;
//		}
//	}
//}
//int main(){
//	int arr[6]={1,2,3,4,5,6};
//	int n=6;
//	printArray(arr,n);
//	swapAlternate(arr,n);
//	printArray(arr,n);
//}

//Find the unique number in a odd length array.
//#include<iostream>
//using namespace std;
//int findUnique(int arr[], int n){
//	int ans=0;
//	for(int i=0;i<n;i++){
//		ans= ans^arr[i];
//	}
//	return ans;
//}
//int main(){
//	int arr[7]={2,2,3,4,3,7,7};
//	int n=7;
//	int unique= findUnique(arr,n);
//	cout<<" "<<unique<<endl;
//}

//Find duplicates in an array.
//#include<iostream>
//using namespace std;
//int findDuplicate(int arr[],int n){
//	int ans=0;
//	for(int i=0;i<n;i++){
//		ans= ans^arr[i];
//	}
//	for(int i=1;i<n;i++){
//		ans=ans^i;
//	}
//	return ans;
//}
//int main(){
//	int arr[6]={1,4,2,3,4,5};
//	int n=6;
//	int duplicate= findDuplicate(arr,n);
//	cout<<" "<<duplicate<<endl;
//}

//Intersection of two arrays means an array that contains common elements of two arrays.
//#include<iostream>
//using namespace std;
//int findArrIntersec(int arr1[], int arr2[], int n1, int n2){
//	for(int i=0;i<n1;i++){
//		int element= arr1[i];
//		for(int j=0;j<n2;j++){
//			if(element==arr2[j]){
//				cout<<element<<endl;
//				arr2[j]= INT_MIN;
//				break;
//			}
//		}
//	}
//}
//int main(){
//	int arr1[]= {1,2,2,2,3,4};
//	int n1= 6;
//	int arr2[]={2,2,3,4};
//	int n2= 4;
//	findArrIntersec(arr1,arr2,n1,n2);
//}

//Pair Sum.
//#include<iostream>
//using namespace std;
//int s=5;
//void pairSum(int arr[], int n){
//	for(int i=0;i<n;i++){
//		for(int j=1;j<n;j++){
//			if(arr[i]+arr[j]==s && arr[i]<arr[j]){
//				cout<<(arr[i])<<(",")<<(arr[j])<<endl;
//			}			
//		}
//	}
//}
//int main(){
//	int arr[]={1,2,3,4,5};
//	int n=5;
//	pairSum(arr,n);
//}

//Triplets with given sum.
//#include<iostream>
//using namespace std;
//int sum=12;
//int findTriplet(int arr[], int n){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			for(int k=0;k<n;k++){
//				if(arr[i]+arr[j]+arr[k]==sum){
//					cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;			
//				}
//			}	
//		}
//	}
//}
//int main(){
//	int arr[]={1,2,3,4,5};
//	int n=5;
//	findTriplet(arr,n);
//}

//Sort 0,1 (method1)
//#include<iostream>
//using namespace std;
//int sort01(int arr[], int n){
//	int low=0;
//	int high= n-1;
//	int mid= low+high/2;
//	while(mid<=high){
//		if(arr[mid]==0){
//			swap(arr[mid],arr[low]);
//			mid++;
//			low++;
//		}
//		if(arr[mid]==1){
//			swap(arr[mid],arr[high]);
//			mid++;
//			high--;
//		}
//	}
//}
//int printArray(int arr[],int n){
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}
//int main(){
//	int arr[]={1,0,1,0,1,0};
//	int n= sizeof(arr)/sizeof(int);
//	printArray(arr,n);
//	sort01(arr,n);
//	printArray(arr,n);
//}

//Sort 01 (method 2)
//#include<iostream>
//using namespace std;
//void sort01(int arr[], int n){
//	int i=0;
//	int j=n-1;
//	while(i<j){
//		while(arr[i]==0 && i<j){
//			i++;
//		}
//		while(arr[j]==1 && i<j){
//			j--;
//		}
//		if(i<j){
//			swap(arr[i],arr[j]);
//			i++;
//			j--;
//		}
//	}
//}
//void printArray(int arr[],int n){
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}
//int main(){
//	int arr[]={1,0,1,0,1,0};
//	int n= sizeof(arr)/sizeof(int);
//	printArray(arr,n);
//	sort01(arr,n);
//	printArray(arr,n);
//}

//Sort 012
//#include<iostream>
//using namespace std;
//void sort012(int arr[], int n){
//	int low=0;
//	int high=n-1;
//	int mid=0;
//	while(mid<=high){
//		if(arr[mid]==0){
//			swap(arr[mid],arr[low]);
//			mid++;
//			low++;
//		}
//		else if(arr[mid]==1){
//			mid++;
//		}
//		else if(arr[mid]==2){
//			swap(arr[mid],arr[high]);
//			high--;
//		}
//	}
//}
//void printArray(int arr[], int n){
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//}
//int main(){
//	int arr[]={1,2,0,0,1,2};
//	int n= sizeof(arr)/sizeof(int);
//	printArray(arr,n);
//	sort012(arr,n);
//	printArray(arr,n);
//}



