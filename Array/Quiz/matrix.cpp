#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={0};
    int c=100;
    int size =3;
    for(int i=1;i<size;i++){
        for(int j=1;j<size;j++){
            int temp = arr[i][j]+c;
            arr[i][j] = arr[j][i];
            arr[j][i] = temp-c;
        }
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    // matrix remain same

    return 0;
}