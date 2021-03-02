#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>current){
                arr[j+1] = arr[j];
                arr[j] = current;
            }    
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    insertion_sort(arr,n);
    return 0;
}