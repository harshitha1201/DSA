#include<bits/stdc++.h>
using namespace std;

// PASS BY VALUE - copy of a variable is passed to function
void doSomething(string s){
    s[0]='t';
    cout<<s<<endl;
}

// PASS BY REFERENCE - reference of variable is given, changes are done to original variable
void doNothing(string &str){
    str[0]='t';
    cout<<str<<endl;
}

// Array - Pass by reference
void doSomething(int arr[], int n){
    arr[0] = arr[0]+100;
    cout<<"Value inside function: "<<arr[0]<<endl;
}

int main(){

    string s = "raj";
    doSomething(s);    // taj
    cout<<s;           // raj

cout<<endl<<endl;

    string str = "raj";
    doNothing(str);    // taj
    cout<<str;         // taj

cout<<endl<<endl;

    int n=5;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    doSomething(arr,n);
    cout<<"Value inside main function: "<<arr[0]<<endl;

    return 0;
}