/** INSERTION SORT
 * takes an element from start and place it in its correct order.
 */
#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a]= arr[b];
    arr[b]=temp;
}
void insertion_sort(int arr[], int n){

    for(int i=0;i<n;i++){

        //compare the element to its left elements until left element is smaller.
        for(int j=i;j>0 && arr[j-1]>arr[j];j--){
            swap(arr, j-1, j);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr, n);
    cout<<"Sorted Array using insertion sort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< endl;
    }
}




/** Time Complexity  
 * Average and worst
 TC = n + (n-1) + (n-2) + (n-3) + ..........
    = (n * (n+1))/2
    = (n^2)/2 + n/2
    = n^2

 * Best case
 * i.e. No swap happens i.e. array is in sorted order
 *  = n

 */
