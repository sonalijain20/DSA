/** BUBBLE SORT
 * pushes back the greatest number to the end of the arrays
 */
#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a]= arr[b];
    arr[b]=temp;
}
void bubble_sort(int arr[], int n){

    for(int i=n-1;i>0;i--){
        bool did_swap=false;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr, j, j+1);
                did_swap=true;
            }
        }
        //break the loop if no swap happened i.e. array is in sorted order now.
        if(did_swap==false){
            break;
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
    bubble_sort(arr, n);
    cout<<"Sorted Array using bubble sort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< endl;
    }
}

void recursive_bubble_sort(int arr[], int n){

    if (n == 1) return;
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    recursive_bubble_sort(arr, n - 1);

}




/** Time Complexity  
 * Average and worst
 TC = n + (n-1) + (n-2) + (n-3) + ..........
    = (n * (n+1))/2
    = (n^2)/2 + n/2
    = n^2

 * Best case
 * i.e. No swap happens
 *  = n

 */
