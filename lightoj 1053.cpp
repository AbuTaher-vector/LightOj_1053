#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>a;
    for(int i=1;i<=t;i++)
    {
        int x;
        int tt=3;
        while(tt--)
        {
          cin>>x;
         a.push_back(x);
        }
        sort(a.begin(),a.end());
        int ff=(a[0]*a[0])+(a[1]*a[1]);
        int fff=a[2]*a[2];
        cout<<"Case "<<i<<": ";
        if(ff==fff) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        while(a.size()!=0)  a.erase(a.begin()+0);
    }
}
