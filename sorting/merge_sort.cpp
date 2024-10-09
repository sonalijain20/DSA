/** MERGE SORT
 * DIVIDE & MERGE
 * divide the array into halves until arrays contain single element 
 * and then start merging them in sorted order.
 */
#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a]= arr[b];
    arr[b]=temp;
}

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int p1=low, p2=mid+1;
    while(p1<=mid && p2<=high){
        if(arr[p1]<arr[p2]){
            temp.push_back(arr[p1]);
            p1++;
        }
        else{
            temp.push_back(arr[p2]);
            p2++;
        }
    }
    while(p1<=mid){
        temp.push_back(arr[p1]);
        p1++;
    }
    while(p2<=high){
        temp.push_back(arr[p2]);
        p2++;
    }

    for(int i=low;i<=high;i++){
        arr[i]= temp[i-low];
    }
}
void merge_sort(int arr[], int low, int high){

    if(low>=high) return;

    int mid = (low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);

    merge(arr, low, mid, high);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr, 0 , n-1);
    cout<<"Sorted Array using merge sort:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< endl;
    }
}




/** Time Complexity  
 * For divide = n+ n/2 + n/4 + n/8 + .......  (as we are diving the array into half)
 *            = log2 (n)
 * 
 * For merge = n
 * 
 * total time complexity = n * log2(n)  , (best, avg, worst)
 */

/** Space Complexity
 * 0(n)
 */
