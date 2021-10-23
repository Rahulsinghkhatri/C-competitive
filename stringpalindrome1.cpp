#include<bits/stdc++.h> // by this we can include all the header files necessary for competitive programming
using namespace std;
int main()
{
    string str;
    cin>>str;
    string str_rev;
    for(int i=str.size()-1;i>=0;i--)   //str.size()  tells us the size of the string
    {
        str_rev.push_back(str[i]);   // push_back is used to add a character to the end of existing string
    }
    if(str_rev==str)
      cout<<"PALINDROME"<<endl;
    else
      cout<<"NOT PALINDROME"<<endl;
    return 0;
}