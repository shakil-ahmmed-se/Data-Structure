#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int t;
    cin>>t;
   while (t--)
   {
        int n;
        cin>> n;
        for (int i = 0; i < n; i++)
            {
                int x;
                cin>>x;
                s.insert(x);//O(log N)
            
            }
   }
   for (int i = 0; i < t; i++)
   {
    for(auto val : s) cout<< val<<" ";
   }
   cout<<endl;
   
  
    // reverse( s.begin(), s.end());
    
    // if(s.count(10)) cout<<"Yes"<<endl;
    // else cout<<"No"<<endl;
    // for (auto it = s.rbegin(); it != s.rend(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    
    return 0;
}