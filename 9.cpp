#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,set<int>> m1;
    map<string,set<int>> m2;
    m1.insert(pair<string,set<int>>("satyam",{1,2,3,4}));
    m1.insert(pair<string,set<int>>("aayush",{5,6,4}));

    m2.insert(pair<string,set<int>>("madhur",{1,2,3,4}));
    m2.insert(pair<string,set<int>>("aayush",{6,4,8,9}));

    map<string,set<int>> m3(m2);
    vector<int> v;

    for(auto it=m2.begin();it!=m2.end();it++)
    {
        if(m3.find(it->first)!=m3.end())
        {
            for(auto il=it->second.begin();il!=it->second.end();il++)
            {
                v.push_back(*il);
            }

            auto il=m3.find(it->first);
            it->second.insert(v.begin(),v.end());

        }
        else
        {
            m3.insert(*it);
        }
    }


    for(auto it=m3.begin();it!=m3.end();it++)
    {
        cout<<it->first<<" ";
        for(auto il=it->second.begin();il!=it->second.end();il++)
        {
            cout<<*il<<" ";
        }
        cout<<endl;
    }

    return 0;

}