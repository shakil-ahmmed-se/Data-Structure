#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> mp;
    mp["Shakil"] = 100;
    mp["Tamim"] = 19;
    mp["Musfiq"] = 1;
    mp["Sakib"] = 75;

    // if(mp.count("Shakil")){
    //     cout<<"Ache"<<endl;
    // }
    // else{
    //     cout<<"Nai"<<endl;
    // }
    
    
    // cout<<mp["Shakil"]<<endl;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<< it->first<<" "<<it->second<<endl;
    }
    
    return 0;
}