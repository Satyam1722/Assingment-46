#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> m;
    m.insert(pair<string,int>("satyam",100));
    m.insert(pair<string,int>("aayush",200));
    m.insert(pair<string,int>("shantanu",300));
    m.insert(pair<string,int>("bharat",400));
    m.insert(pair<string,int>("abhay",500));
    m.insert(pair<string,int>("madhur",700));

    map<string,int>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;

}