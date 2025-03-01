//Print the average of all the element in a array
#include<bits/stdc++.h>
using namespace std;

double arrayAvg(int arr[], int n){
      double total = 0;
      for(int i=0; i<n; i++){
            total = total + arr[i];
      }
      return total/n;
}

int main(){
      int arr[] = {2, 4, 3, 6, 9};
      int n = sizeof(arr)/sizeof(arr[0]);

      double avg = arrayAvg(arr, n);
      cout << "Average of element in array is: " << avg << endl;
}