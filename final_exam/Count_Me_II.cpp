#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        map<int, int> mp;
        int mostFrequentNum = INT_MIN;
        int maxCount = INT_MIN; 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
            if(mp[x] > maxCount){
                    maxCount = mp[x];
                    mostFrequentNum = x;
                }
            else if(mp[x] == maxCount && x > mostFrequentNum)
            {
                    mostFrequentNum = x;
                }
        }
        cout<<mostFrequentNum<<" "<<maxCount<<endl;
        
    }
    
    return 0;
}