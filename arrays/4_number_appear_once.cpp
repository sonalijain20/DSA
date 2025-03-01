//Program to find the number that appear only once and other numbers appears twice.

// Input = [1,2,3,4,1,3,2,5,5]

#include <bits/stdc++.h>
using namespace std;


/**
    BRUTE FORCE APPROACH     : Using linear search
    Time complexity = O(N^2) : as linear search is performed for every element
    Space complexity = O(1)  : no extra space is used
 */
int getSingleElementBrute(vector<int> &arr){
    int num=0, count =0;
    int len = arr.size();

    for(int i = 0; i < len; i++){
        num = arr[i];
        count = 0;
        for(int j=0;j<len;j++){

            //increase teh count
            if(arr[j] == num){
                count++;
            }
        }

        //return the number if it only appears only once
        if(count == 1){
            return num;
        }
    }

    return -1;
}


/**
    BETTER APPROACH : using Hashing
    Time Complexity = O(N * logM) + O(M)     ; M would be (N/2+1)   
    Space Complexity = O(M)
 */
int getSingleElementBetter(vector<int> &arr){
    int len = arr.size();
    map<int, int> hashMap;

    //create the map for the given array                 TC: O(N * logM)   ; N: size of array, M: Size of map
    for(int i=0;i<len;i++){
        hashMap[arr[i]]++;
    }

    //iterate over map to find the element that appears only once       TC: O(M)
    for(auto it: hashMap){
        if(it.second == 1){
            return it.first;
        }
    }

    return -1;
}

/**
    OPTIMAL APPROACH : using XOR    
 */
int getSingleElement(vector<int> &arr){
    int XORResult = 0;

    for(int i=0;i<arr.size();i++){
        XORResult = XORResult ^ arr[i];
    }

    return XORResult;
}




int main(){
    vector<int> arr= {1,2,3,4,1,3,2,5,4};
    int result = getSingleElement(arr);
    cout<<"Single appearing element: " <<result;
    return 0;
}