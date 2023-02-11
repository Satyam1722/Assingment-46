#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,100));
    m.insert(pair<int,int>(2,200));
    m.insert(pair<int,int>(3,300));
    m.insert(pair<int,int>(4,400));
    m.insert(pair<int,int>(0,500));
    m.insert(pair<int,int>(7,700));

    map<int,int>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;

}