#include<iostream>
using namespace std;


int main(){
    //declear arr
        int arr[3][2] ={{1,2},{10,40},{50,60}};
        //second way
        int arr1[3][2]={10,20,30,40,50,60};
        //bot work same

    //access
        cout<<arr[1][0]<<endl;

        //print all array
        int rowSize = 3 ,colSize=2;
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                cout<<arr1[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
}