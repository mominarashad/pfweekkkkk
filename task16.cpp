#include<iostream>
using namespace std;


main()
{
    float amount;
    cout << "Enter total due of item: ";
    cin >> amount;
    float array[4];
    float sum=0;
     float price=0;
    for(int idx=0; idx < 4; idx++)
    {
       
        if(idx == 0)
        {
            cout << "Enter quarters: ";
            cin >> array[0];
            price = 0.25 * array[0];
        }
        if(idx == 1)
        {
            cout << "Enter dimes: ";
            cin >> array[1];
            price = 0.10 * array[1];
        }
        if(idx == 2)
        {
            cout << "Enter nickels: ";
            cin >> array[2];
            price = 0.05 * array[2];
        }
        if(idx == 3)
        {
            cout << "Enter pennies: ";
            cin >> array[3];
            price = 0.01 * array[3];
        }
        sum = sum + price;
    }
    if (sum >= amount)
    {
        cout << "True";
    }
    else 
    {
        cout << "False";
    }

}