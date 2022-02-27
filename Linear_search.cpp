#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter a number for linear search"<<endl;
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Found in "<<i<<" position"<<endl;
            break;
        }
    }
    return 0;
}