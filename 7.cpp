#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int,greater<int>> m;
    m.insert(pair<int,int>(1,6));
    m.insert(pair<int,int>(2,8));
    m.insert(pair<int,int>(6,3));
    m.insert(pair<int,int>(8,2));


    map<int,int>::iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;

}