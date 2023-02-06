#include<iostream>
using namespace std;
main()
{
   bool isfound=false;
   string word;
   cout<<"enter your word:";
   getline(cin,word);
   char letter;
   cout<<"enter the letter:";
   cin>>letter;
   int idx=0;
   while(word[idx]!='\0')
   {
       idx++;
   }
   for(int last=idx; last>=0; last--)
   {
      cout<<word[last]<<endl;
   
   if(word[last]==letter)
   {
      isfound=true;
      break;
   }
   }
   if(isfound==true)
   {
      cout<<"the statement is true";
   }
   else
   {
       cout<<"the statement is false";
   }
}