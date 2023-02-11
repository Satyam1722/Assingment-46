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
    pair<string,int> p;
    cout<<"enter the key you want to delete : ";
    cin>>p.first;
    m.erase(p.first);

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<"enter the pair you want to insert : ";
    cin>>p.first>>p.second;
    
    m.insert(p);

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;

}