//Count the frequency of each element in a array
#include<bits/stdc++.h>
using namespace std;

void freqCount(int arr[], int n){
      unordered_map<int, int>mp;

      for(int i=0; i<n; i++){
            mp[arr[i]]++;     //Store each element with frequency in a map.
      }

      for(int i=0; i<n; i++){
            if(mp[arr[i]] != -1){
                  cout << arr[i] << " " << mp[arr[i]] << endl; //Prints element from the map.
                  mp[arr[i]] = -1;  //Marking element as zero after printing to avoid duplicate value.
            }
      }
}

int main(){
      int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
      int n = sizeof(arr) / sizeof(arr[0]);  //Method to find the size of array.

      freqCount(arr, n);
      return 0;
}