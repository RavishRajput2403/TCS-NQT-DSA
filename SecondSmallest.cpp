//Find the second smallest element in a array
#include<bits/stdc++.h>
using namespace std;

int smallestElement(int arr[], int n){
      int min = arr[0];
      for(int i=0; i<n; i++){
            if(arr[i] < min){
                  min = arr[i];
            }
      }
      return min;
}

int secondSmallest(int arr[], int n){
      int smallest = smallestElement(arr, n);
      int sSmallest = INT_MAX;
      for(int i=0; i<n; i++){
            if(arr[i] < sSmallest && arr[i] > smallest){
                  sSmallest = arr[i];
            }
      }
      return sSmallest;
}

int main(){
      int arr[] = {3,5,7,2,8};
      int n = 5;
      int sSmallest = secondSmallest(arr, n);
      cout << "Second largest element in array : " << sSmallest << endl;
      return 0;
}