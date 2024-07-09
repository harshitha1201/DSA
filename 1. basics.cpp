// ctrl+shift+b
#include<bits/stdc++.h>
using namespace std;

int main(){
    // string and getline
    /* 
    string s;  -- only hey
    cin>>s;
    cout<<s; 
    */

    /* 
    string str;
    getline(cin,str);
    cout<<str; 
    */
//---------------------------------------------------------------

   /*
   int age;
   cin>>age;
   if(age>=18){
    cout<<"adult";
   }
   else{
    cout<<"not an adult";
   }
   */
// -------------------------------------------------------------

  /*
   int day;
   cin>>day;

   switch(day){
    case 1:
        cout<<"1st day";
        break;
    case 2:
        cout<<"2nd day";
        break;
    case 3:
        cout<<"3rd day";
        break;
    default:
        cout<<"enter correctly";
   }
   */
// -----------------------------------------------------------

    /*
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[3];
    */

   // ARRAY ELEMENTS ARE STORED IN CONSECUTIVE MEMORY ADDRESS, BUT WE DON'T KNOW THE EXACT MEMORY ADDRESS

   // 2D ARRAY
   //int arr[3][5];
   //[row_no][col_no]

    /*
   string a = "Striver";
   cout<<a[0]<<" ";
   int len = a.size();
   cout<<len<<" "<<a.length();
    */
// --------------------------------------------------------------------

   /*
   int i;
   for(i=1;i<=5;i++){
    cout<<"striver"<<endl;
   }
   cout<<i;   -- 6
    */
   
   /*
   int i=1;
   while(i<=5){
    cout<<"striver"<<endl;
    i++;
   }
   */
   
   /*
   int i=2;
   do{
    cout<<"Striver"<<i<<endl;
    i=i+1;
   }while(i<=1);
   */
// ----------------------------------------------------------------------

    /* 
To take an array input
    int arr[5];
    for(int i=1;i<=5;i++){
        cin>>arr[i];
    }

To print all the array elements
    for(int i=1;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    */
   
    return 0; 
}