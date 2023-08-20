#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector <int> stalls,int k, int mid, int n){
	int cowCount=1;
	int lastPos= stalls[0];
	
	for(int i=0;i<n;i++){
		if(stalls[i]-lastPos>=mid){
			cowCount++;
			if(cowCount==k){
				return true;
			}
			lastPos=stalls[i];
		}
	}
	return false;
}
int aggresiveCows(vector <int> stalls, int k, int n){
	
	sort(stalls.begin(),stalls.end());
	int low=0;
	int max=-1;
	int high = stalls[n - 1] - stalls[0];
	int ans=-1;
	int mid= low+(high-low)/2;
	
	while(low<=high){
		if(isPossible(stalls,k,mid,n)){
			ans= mid;
			low=mid+1;
		}
		else{
			high=mid-1;
		}
		mid= low+(high-low)/2;
	}
	return ans;
}

int main(){
	std::vector<int> stalls = {5, 10, 15};
	int n=stalls.size();
	int k=2;
	cout<<"The answer is "aggresiveCows(stalls,k,n)<<endl;
}


