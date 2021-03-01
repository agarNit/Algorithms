#include <iostream>
using namespace std;

void binarysearch(int arr[],int m,int n){
    int s = 0, e = 6;
    bool flag = false;
    while(s<=e){
        int mid = (s + e)/2;
        if(arr[mid] == n){
            cout << mid << " " << arr[mid] << endl;
            flag = true;
            break;
        }
        else if(arr[mid] > n){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
   if(!flag)
   cout << "-1" << endl;
}

int main(){
    int n;
    cin >> n;
    int m = 6;
    int arr[] = {5,8,12,23,32,43};
    binarysearch(arr,m,n);
    return 0;
}