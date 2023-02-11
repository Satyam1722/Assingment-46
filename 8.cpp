#include<bits/stdc++.h>
using namespace std;

string findInt(string s)
{
    map<char,int> m;
    string ans="";

    for(auto i:s)
    {
        m[i]++;
    }

    while(m['z']!=0 && m['e']!=0 && m['r']!=0 && m['o']!=0)
    {
        m['z']--;
        m['e']--;
        m['r']--;
        m['o']--;
        ans+="0";
    }

    while(m['o']!=0 && m['n']!=0 && m['e']!=0)
    {
        m['o']--;
        m['n']--;
        m['e']--;
        ans+="1";
    }

    while(m['t']!=0 && m['w']!=0 && m['o']!=0)
    {
        m['t']--;
        m['w']--;
        m['o']--;
        ans+="2";
    }

    while(m['t']!=0 && m['h']!=0 && m['r']!=0 && m['e']>1)
    {
        m['t']--;
        m['h']--;
        m['r']--;
        m['e']=m['e']-2;
        ans+="3";
    }

    while(m['f']!=0 && m['o']!=0 && m['u']!=0 && m['r']!=0)
    {
        m['f']--;
        m['o']--;
        m['u']--;
        m['r']--;
        ans+="4";
    }

    while (m['f'] && m['i'] && m['v']
           && m['e']) {
        m['f']--;
        m['i']--;
        m['v']--;
        m['e']--;
        ans += '5';
    }
    while (m['s'] && m['i'] && m['x']) {
        m['s']--;
        m['i']--;
        m['x']--;
        ans += '6';
    }
    while (m['s'] && m['e'] && m['v']
           && m['e'] && m['n']) {
        m['s']--;
        m['e']--;
        m['v']--;
        m['e']--;
        m['n']--;
        ans += '7';
    }
    while (m['e'] && m['i'] && m['g']
           && m['h'] && m['t']) {
        m['e']--;
        m['i']--;
        m['g']--;
        m['h']--;
        m['t']--;
        ans += '8';
    }
    while (m['n'] && m['i'] && m['n']
           && m['e']) {
        m['n']--;
        m['i']--;
        m['n']--;
        m['e']--;
        ans += '9';
    }





     return ans;
}


int main()
{
    string ans=findInt("ozerotwneozerothree");
    cout<<ans<<endl;
    return 0;
}