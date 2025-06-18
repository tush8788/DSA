#include<iostream>
using namespace std;

// Debug the code. Sort 0s and 1s
void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i]==0){  //we compair input[nextZero] == 0 so this is issue
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
            nextZero++; //not increment
		}
	}
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {0,1,0,1,1};
    int size = 5;
    sort0sand1s(arr,size);
    printArr(arr,size);
    return 0;
}