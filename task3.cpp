#include<iostream>
using namespace std;
main()
{
   int arr[5];
   int sum=0;
   float average=0;
   for(int idx=0; idx<5; idx++)
   {
    cout<<"enter element:";
    cin>>arr[idx];
    sum=sum+arr[idx];
   }
   cout<<sum;
   average=sum/5;
   cout<<average;
 
   
   
   
}