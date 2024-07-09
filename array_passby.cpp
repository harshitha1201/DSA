#include<bits/stdc++.h>
using namespace std;

   void doSomething(int arr[], int n){
        arr[0] = arr[0]+100;
        cout<<"Value inside function: "<<arr[0]<<endl;
    }
int main(){
    int n=5;
    int arr[n];

    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    doSomething(arr,n);
    cout<<"Value inside main function: "<<arr[0]<<endl;

return 0;
}