#include<iostream>
using namespace std;
main()
{ 
    bool found=false;
    int num;
    int size;
    cout<<"enter the number:";
    cin>>size;

    int arr[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"enter the elements:";
        cin>>arr[idx];
    }
    cout<<"enter the number you want to search:";
    cin>>num;
    for(int idx=0; idx<size; idx++)
    {
        if(arr[idx]==num)
        {
            found=true;
            break;
        }
        
    }
    if (found == true) 
    {
        cout << "Already exist.";
    }
    else 
    {
        cout  << "Not found.";
    }
     
}