//Program to find the largest element of an array

#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){
    int largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largest(arr, n);
    return 0;
}   




//TIME COMPLEXITY
//  = 0(n)