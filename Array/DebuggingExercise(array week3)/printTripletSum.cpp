#include<iostream>
using namespace std;

// Debug the code. List all triplets in array that sums to X.
int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){ 
		for(int j=i+1; j<size; j++){ //here issue is j start with i not i+1
			for(int k=j+1; k<size; k++){//here issue is k start with j not j+1
				if(input[i] + input[j] + input[k] == x) {
					triplets++;
				}
			}
		}
	}
	return triplets;
}

int main(){
	int arr[]={1,2,4,5,6,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int target = 11;
	cout<<tripletSumToX(arr,size,target)<<endl;
	return 0;
}