//Reverse the given array
#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
      int i=0;
      int j=n-1;
      while(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
      }
}

void printArray(int arr[], int n){
      for(int i=0; i<n; i++){
            cout << arr[i] << " ";
      }
      cout << endl;
}

int main(){
      int arr[] = {2,4,7,9,3};
      int n = 5;

      cout << "Reversed array is: ";
      reverseArray(arr, n);
      printArray(arr, n);
      return 0;
}