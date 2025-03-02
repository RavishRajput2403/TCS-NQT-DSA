//Remove the duplicate element from the sorted array
#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int n){
      int i=0;
      for(int j=1; j<n; j++){
            if(arr[i] != arr[j]){
                  i++;
                  arr[i] = arr[j];
            }
      }
      return i + 1;
}

void printArray(int arr[], int n){
      for(int i=0; i<n; i++){
            cout << arr[i] << " ";
      }
      cout << endl;
}

int main(){
      int arr[] = {2, 4, 5, 5, 7, 9};
      int n = 6;

      n = removeDuplicate(arr, n);
      printArray(arr, n);

      return 0;
}