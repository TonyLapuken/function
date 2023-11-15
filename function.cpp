#include <iostream>

using namespace std;

int sum(int arr[],int n){
    // counter variable
    int sum = 0;



    // looping through array
    for(int i = 0;i < n;i++){
        sum += arr[i];
    }

    return sum;
}

int main(){
    int arr[] = {1,2,3,4,5}; // test case

    int n = sizeof(arr)/sizeof(arr[0]); // size of array

    cout << sum(arr,n);
}
