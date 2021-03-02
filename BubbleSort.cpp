#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    int i=1;
    while (i<n){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        i++;
    }
    for(int i=0;i<n;i++)
    cout << arr[i]<< " ";
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bubble_sort(arr,n);
    return 0;
}