#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,t;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < q; i++)
    {
        int num;
        cin>> num;
        pq.push(num);
    }

    cin>> t;
    while (t--)
    {
        int a;
        cin>> a;
        if( a == 0){
            int x;
            cin>> x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }
        else if( a == 1){
            if(!pq.empty()){
                cout<<pq.top()<<endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }

        else if( a == 2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    cout<<pq.top()<<endl;
                }
                else{
                    cout<<"Empty"<<endl;
                }
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
    }
    

    
    return 0;
}