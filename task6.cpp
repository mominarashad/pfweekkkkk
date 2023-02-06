#include<iostream>
using namespace std;
main()
{ 

    int num;
    int size;
    cout<<"enter the size:";
    cin>>size;
    cout<<"enter the number:";
    cin>>num;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"enter the elements:";
        cin>>arr[idx]; 
        num=arr[idx]*num;
        
    }
    cout<<num;
}