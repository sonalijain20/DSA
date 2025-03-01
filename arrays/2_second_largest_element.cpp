// SECOND LARGEST ELEMENT IN ARRAY

#include<bits/stdc++.h>
using namespace std;

//optimail solution
int secondLargest(int arr[], int n){
    int largest = arr[0];
    int secondLargest = -1;

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }

    return secondLargest;
}

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a]= arr[b];
    arr[b]=temp;
}

//brute force (sorting and finding)
int secondLargest2(int arr[], int n){

    int min_at;

    for(int i=0;i<=n-2;i++){
        min_at=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min_at])
                min_at=j;
        }
        if(min_at!=i){
            swap(arr, i, min_at);
        }
    }

    int largest = arr[n-1];
    int secondLargest=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            secondLargest = arr[i];
            break;
        }
    }

    return secondLargest;

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<secondLargest(arr,n);
    return 0;
}