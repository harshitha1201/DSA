#include<bits/stdc++.h>
using namespace std;

// void -> which does not return anything
// return
// parameterised
// non-parameterised

void printName(){
    cout<<"Hey Striver ";
}
void printName1(string name){
    cout<<"Hey "<<name;
}
int sum(int num1, int num2){
    int num3=num1+num2;
    return num3;
}

int main(){
    printName();

    string name;
    cin>>name;
    printName1(name);

    int num1,num2;
    cin>>num1>>num2;
    int res = sum(num1,num2);
    cout<<res; 
    
    return 0;
}