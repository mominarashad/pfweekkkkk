#include<iostream>
using namespace std;


main()
{
    int arr1[2];
    for (int idx=0; idx < 2; idx++ ) 
    {
        cout << "Enter number: ";
        cin >> arr1[idx];
       
    }
    
    int size;
    cout << "Enter size of array 2: ";
    cin >> size;
    int arr2[size];
    for (int idx=0; idx < size; idx++ ) 
    {
        cout << "Enter number: ";
        cin >> arr2[idx];
    }
    
    for (int idx=0; idx < size; idx++ ) 
    {
        if (idx == 0)
        {
            cout << arr1[idx] << " ";
        }
        cout << arr2[idx]<< " ";
        if(idx == size-1)
        {
            cout << arr1[1] << " ";
        }
        
    }
    
   
     
    
}
