#include<iostream>
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

int main(){
      int arr[] = {2,6,8,1,9};
      int n = 5;
      int min = smallestElement(arr, n);
      cout << "Smallest Element is : " << min << endl;
      return 0;
}