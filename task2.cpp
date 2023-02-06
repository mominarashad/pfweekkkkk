#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter the number:";
    cin>>size;

    int arr[size];
    for(int idx=0; idx<=size; idx++)
    {
        cout<<"enter the element";
        cin>>arr[idx];
    }
    for(int idx=0; idx<=size; idx++)
    {
        cout<<arr[idx]<<" " ;
    }
}