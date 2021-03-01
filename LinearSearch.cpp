#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void linear_search(int arr[], int m, int n){
    bool flag = false;
    for(int i=0; i<m; i++){
        if(arr[i] == n){
            cout << i << " " << arr[i] << endl;
            flag = true;
        }
    }
    if (!flag)
        cout << "-1"<<endl;
}

int main() {
   int n;
   cin>>n;
   int m = 6;
   int arr[] = {12,23,32,5,8,43};
   linear_search(arr, m, n);
   return 0;
}
