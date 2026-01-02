// Problem: Rotate Array
// Approach: Reversal Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
// Problem Link:https:https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/rotate-array-by-n-elements-1587115621


//Function reverse part of array
void reversePart(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(int arr[], int n, int d) {
    // code here
    d=d%n;
    reversePart(arr,0,d-1);
    reversePart(arr,d,n-1);
    reversePart(arr,0,n-1);
}

