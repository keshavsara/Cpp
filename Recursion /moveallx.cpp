//move all x to the end of the string 

#include<bits/stdc++.h>
using namespace std;

string moveallX(string s)
{
    if(s.length()==0)
    {
        return " ";

    }

    char ch=s[0];
    string ans = moveallX(s.substr(1));

    if(ch=='x')
    {
        return ans+ch;
    }
    return ch+ans;

}

int main()
{
    cout<<moveallX("axxbdxcefxhix")<<endl;
    return 0;
}