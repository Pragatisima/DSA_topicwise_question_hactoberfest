//Given a string A and integer B, remove all consecutive same characters that have length exactly B.

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
string solve(string A, int B) {
     string ans="";
    int c=1;
    char ch=A[0];
    for(int i=1;i<A.size();i++)
    {
        if(A[i]==ch)
        {
            c++;
        }
        else
        {
            if(c!=B)
            {
                for(int j=0;j<c;j++)
                    ans+=ch;
            }
            ch=A[i];
            c=1;
        }
    }
    if(c!=B)
    {
        for(int j=0;j<c;j++)
            ans+=ch;
    }
    return ans;
}

int main()
{
  string s= "kbdqjhdnxxuhhaajBSSIASNXAALAJIIS";
  string changed_s = solve(s,2);
  cout<<changed_s<<endl;
}