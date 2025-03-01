//Rearrange given array in ascending order
#include<bits/stdc++.h>
using namespace std;

void arrangeArray(int arr[], int n){
      for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1; j++){
                  if(arr[j] > arr[j+1]){
                        swap(arr[j], arr[j+1]);
                  }
            }
      }
}

int printArray(int arr[], int n){
      for(int i=0; i<n; i++){
            cout << arr[i] << " ";
      }
      cout << endl;
}

int main(){
      int arr[] = {7, 2, 3, 1, 5, 8};
      int n = sizeof(arr)/sizeof(arr[0]);

      arrangeArray(arr, n);
      printArray(arr, n);
}