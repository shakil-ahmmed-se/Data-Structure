#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);//O(log N)

    }

    
    // if(s.count(10)) cout<<"Yes"<<endl;
    // else cout<<"No"<<endl;
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    for (int element : s) {
    cout << element << " ";
    } 
    
    return 0;
}