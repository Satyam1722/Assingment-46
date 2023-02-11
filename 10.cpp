#include<bits/stdc++.h>
using namespace std;

int cube(int x)
{
    return x*x*x;
}

void show(int n)
{
    int num=ceil(cbrt(n));

    map<int,int> m;

    for(int i=1;i<=num;i++)
    {
        m[cube(i)]=i;
    }

    for(auto it=m.begin();it!=m.end();it++)
    {
        int a=it->first;

        int b=a+n;

        if(m.find(b)!=m.end())
        {
            cout<<b<<"-"<<a<<"="<<n<<endl;
            return;
        }

    }
          cout<<"no such pair exist"<<endl;
   
}

int main()
{
    int n;
    cin>>n;
    show(n);
    return 0;
}