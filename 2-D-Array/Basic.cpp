#include<iostream>
using namespace std;


void print2DArr(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //row wise
    // ROW Wise
    // 123
    // 456
    // 789
    cout<<"ROW Wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    //col wise
    // COl Wise
    // 147
    // 258
    // 369
    cout<<"_____"<<endl<<"COl Wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i];
        }
        cout<<endl;
    }

    //diagnal
    // 1  
    //   5 
    //     9
    cout<<"_____"<<endl<<"diagnal "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j) cout<<arr[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }

}

void takingInput(){
    int arr[3][2];
    int rowSize = 3;
    int colSize = 2;
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<"input for "<<i<<", "<<j<<endl;
            cin>>arr[i][j];
        }
    }

    // print
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    //declear arr
        int arr[3][2] ={{1,2},{10,40},{50,60}};
        //second way
        //this show warning but work perfectly
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
        cout<<"______"<<endl;
        print2DArr();
        takingInput();
        return 0;
}