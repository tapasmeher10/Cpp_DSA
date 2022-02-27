#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Number For Binary Search"<<endl;
    int key;
    cin>>key;

    int s=0;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;
        if(key==arr[mid]){
            cout<<"index is "<<mid<<endl;
            break;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
}