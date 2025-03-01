//Print the sum of all the element in a array.
#include<bits/stdc++.h>
using namespace std;

int arraySum(int arr[], int n){
      int cnt = 0;
      for(int i=0; i<n; i++){
            cnt = cnt + arr[i];
      }
      return cnt;
}

int main(){
      int arr[] = {2, 4, 3, 6, 9};
      int n = sizeof(arr)/sizeof(arr[0]);

      int sum = arraySum(arr, n);
      cout << "Sum of all the element of array: " << sum << endl;
      return 0;
}