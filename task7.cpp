#include<iostream>
using namespace std;
main()
{ 
   
    int smallest=1000;
    int size;
    cout<<"enter the number:";
    cin>>size;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"enter the elements:";
        cin>>arr[idx];
    }
    for(int idx=0; idx<size; idx++)
    {
       if(arr[idx]<smallest)
       {
        smallest=arr[idx ];
       }
       
    }
    cout<<smallest;
}