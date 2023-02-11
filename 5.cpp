#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> m;
    m.insert(pair<string,int>("apple",100));
    m.insert(pair<string,int>("banana",200));
    m.insert(pair<string,int>("lichi",300));
    m.insert(pair<string,int>("mango",400));
    m.insert(pair<string,int>("guava",500));
    m.insert(pair<string,int>("kiwi",700));

    map<string,int>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;

}