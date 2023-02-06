#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter the word:";
    getline(cin,word);
    int idx=0;
    while(word[idx]!='\0')
    {
        
         idx++;
    }
    cout<<"the lenght is:"<<idx;
    if(idx%2==0) 
    {
        cout<<"the lenght is even";
    }  
    else 
    {
        cout<<"the lenght is odd";
    }


}