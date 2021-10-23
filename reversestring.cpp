#include<bits/stdc++.h> // by this we can include all the header files necessary for competitive programming
using namespace std;
int main()
{
    string str;
    cin>>str;
    /*
    string strev;
    for(int i=0;i<str.size();++i)
    {
        strev[i]=str[str.size()-(i+1)];
    }
    cout<<strev<<endl;
    */
    string str_rev;
    for(int i=str.size()-1;i>=0;i--)   //str.size()  tells us the size of the string
    {
        str_rev.push_back(str[i]);   // push_back is used to add a character to the end of existing string
    }
    cout<<str_rev<<endl;
    return 0;
}