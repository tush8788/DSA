#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30};
    cout<<arr<<" "<<&arr<<" "<<&arr[0];
    int size =3;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}