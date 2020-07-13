#include <bits/stdc++.h>

using namespace std;
bool issafe(string s)
{
    int i;
    int l=s.length();
    char c1=s[0];
    char c2=s[1];
    for(i=0;i<l;i=i+2)
    {
        if(s[i]!=c1)
            return false;
    }
    for(i=1;i<l;i=i+2)
    {
        if(s[i]!=c2)
            return false;
    }
    return true;
}
int main()
{
    int l,m=0,longest=0,k;
    cin>>l;
    string s;
    int i,j;
    cin>>s;
    string c;
    c[0]=s[0];
    m++;
    for(i=1;i<l;i++)
    {
        for(j=0;j<m;j++)
        {
            if(c[j]==s[i])
                break;
        }        
        if(j==m)
        {
            c[m]=s[i];
            m++;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            string s1="";
            for(k=0;k<l;k++)
            {
                if(s[k]==c[i]||s[k]==c[j])
                {
                    s1=s1+s[k];
                }
                
            }
            if(issafe(s1)==true&&longest<=s1.length())
            {
                    longest=s1.length();
            }
        }
    }
    cout<<longest;
    return 0;

}
