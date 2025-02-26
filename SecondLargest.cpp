#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
      int max = arr[0];
      for(int i=0; i<n; i++){
            if(arr[i] > max){
                  max = arr[i];
            }
      }
      return max;
}

int secondLargest(int arr[], int n){
      int largest = largestElement(arr, n);
      int slargest = INT_MIN;
      for(int i=0; i<n; i++){
            if(arr[i] > slargest && arr[i] < largest){
                  slargest = arr[i];
            }
      }
      return slargest;
}

int main(){
      int arr[] = {1,2,4,7,7,5};
      int n = 6;
      int slargest = secondLargest(arr, n);
      cout << "Second Largest element in array is : " << slargest << endl;
      return 0;
}