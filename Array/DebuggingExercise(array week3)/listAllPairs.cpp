#include<iostream>
using namespace std;

/*
    Debug the code. List all pairs in array that sums to X.
    input [1,2,3,4,5]
    target 6
    output 2
*/ 
int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){ 
		for(int j=i+1; j<size; j++){ //here we change only j=i+1 insted of j=i
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}


int main(){
    int arr[]={1,2,3,4,5};
    int target =6;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<pairSumToX(arr,size,target);
    return 0;
}