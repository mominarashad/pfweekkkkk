#include<iostream>
using namespace std;
main()
{
    
    float sum=0;
    int size;
    cout<<"enter the size:";
    cin>>size;
    float resistance[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"enter the resistance:";
        cin>>resistance[idx];
        sum=sum+resistance[idx];
    }
    cout<<sum;
}