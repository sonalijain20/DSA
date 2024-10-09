/** SELECTION SORT 
 * select the minimum number from array and move it in the front
*/

#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a]= arr[b];
    arr[b]=temp;
}
void selection_sort(int arr[], int n){
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
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr, n);
    cout<<"Sorted Array using selection sort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< endl;
    }
}


/** Time Complexity  (best, average, worst)
 TC = n + (n-1) + (n-2) + (n-3) + ..........
    = (n * (n+1))/2
    = (n^2)/2 + n/2
    = n^2
 */
