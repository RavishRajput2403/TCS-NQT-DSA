//Print the median of all the elements of a array
#include<bits/stdc++.h>
using namespace std;

double getMedian(int arr[], int n){
      sort(arr, arr+n);
      double median = 0;
      if(n%2 == 0){
            int mid1 = (n/2) - 1;
            int mid2 = (n/2);
            median = (arr[mid1] + arr[mid2]) / 2.0;
      }
      else{
            median = arr[n/2];
      }
      return median;
}

int main(){
      int arr[] = {4, 3, 9, 5, 8};
      int n = sizeof(arr)/sizeof(arr[0]);

      double ans = getMedian(arr, n);
      cout << "Median of array is: " << ans << endl;
      return 0;
}