/** MERGE SORT
 * DIVIDE & MERGE
 * divide the array into halves until arrays contain single element 
 * and then start merging them in sorted order.
 */
#include<bits/stdc++.h>
using namespace std;

void quick_sort(int arr[], int low, int high){

    if(low>=high) return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr, 0 , n-1);
    cout<<"Sorted Array using quick sort:";
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
