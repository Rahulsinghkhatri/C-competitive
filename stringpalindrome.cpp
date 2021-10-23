#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string palindrome;
    int i=0,flag=0;
    while(i<str.size())
    {
       if((str[i]==str[str.size()-1-i]))
       {
           i++;
       }
       else
       {
             flag=1;
             break;
       }
    }
    if(flag==0)
      cout<<"PALINDROME"<<endl;
    else
      cout<<"NOT PALINDROME "<<endl;
    return 0;
}