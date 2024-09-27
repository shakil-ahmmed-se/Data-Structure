#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
   
    while (q--)
    {
        int n;
        cin>> n;
         set<int, greater<int>> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            
            s.insert(x);
        }

        for (int num : s) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}