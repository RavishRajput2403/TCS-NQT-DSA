//Find the largest element in a array
#include<iostream>
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

int main(){
      int arr[] = {4,1,7,5,3};
      int n = 5;
      int max = largestElement(arr, n);
      cout << "Largest Element in array is : " << max << endl;
      return 0;
}
