#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter the number:";
    cin>>size;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"enter the elements:";
        cin>>arr[idx];
    }
   for(int idx=size-1; idx>=0; idx-- )
   {
     cout << arr[idx] << " ";
   }
}