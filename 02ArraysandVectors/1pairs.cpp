#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	
	vector<int> arr;
	int n;
	cin>>n;

	for(int i=0; i<n; i++){
		int num;
		cin>>num;
		arr.push_back(num);
	}
	int s;
	cin>>s;

	//1. BRUTE FORCE APPROACH

	// int flag = 0;

	// for(int i=0; i<n-1; i++){
	// 	for(int j=i+1; j<n; j++){
	// 		if(arr[j]==s-arr[i]){
	// 			flag=1;
	// 			cout<<arr[i]<<" "<<arr[j];
	// 			break;
	// 		}
	// 	}
	// 	if(flag==1){
	// 		break;
	// 	}
	// }

	//2. SORTING APPROACH

	sort(arr.begin(), arr.end());

	for(int i=0; i<arr.size(); i++){

		int num = arr[i];
	
		int tar = s-arr[i];
		int revnum = s*9;

		int flag = 0;

		while(revnum>=tar){
			revnum = arr[arr.size()-1];
			if(revnum==tar){
				cout<<num<<" "<<revnum;
				flag = 1;
				break;
			}
			else{
				arr.pop_back();
			}
		}

		if(flag==1){
			break;
		}


	}


}