#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"enter the word:";
    getline(cin,word);
    int idx=0;
    int vowel=0;
    while(word[idx]!='\0')
    {
    {
        if((word[idx]=='a')|| (word[idx]=='e')|| (word[idx]=='i')|| (word[idx]=='o')|| (word[idx]=='u'))
        vowel=vowel+1;
    }
    idx++;
}
    cout<<vowel;
}