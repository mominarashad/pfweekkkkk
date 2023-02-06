#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter the word:";
    getline(cin,word);
    int length=word.length();
    int idx=0;
    for(int idx=length-1; idx>=0; idx--)
    {
        cout<<word[idx];
    }
}