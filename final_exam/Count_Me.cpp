#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while (n--)
    {
          
        string sentence;
        getline(cin,sentence);

        string word;
        stringstream ss(sentence);
        map<string, int> mp;

        int maxCount = INT_MIN;
        string mostCountWord;
        while ( ss >> word)
        {
            mp[word]++;
            if(mp[word] > maxCount){
                maxCount = mp[word];
                mostCountWord = word;
            }
        
        }
     
        // for(auto val : mp){
        //     if(val.second > maxCount){
        //     mostCountWord = val.first;
        //     maxCount = val.second;
        // } 
        // for (auto  it = mp.begin(); it != mp.end(); it++)
        // {
        //    cout<<it->first<<" "<<it->second<<endl;
        // }
        
    cout<<mostCountWord<<" "<<maxCount<<endl;
    }
    

    
    return 0;
}