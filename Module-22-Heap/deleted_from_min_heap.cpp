#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v,int x){
    v.push_back(x);
    int crnt_idx = v.size()-1;
    while (crnt_idx != 0 )  
    {
        int parent_index = (crnt_idx -1 ) / 2;
        if(v[parent_index] > v[crnt_idx]){
            swap(v[parent_index],v[crnt_idx]);
        }
        else break;
        crnt_idx = parent_index;
    }
    
    
}

void deleted_heap(vector<int> &v){
    v[0] = v[v.size()-1];
    v.pop_back();
    int curnt = 0;
    while (true)
    {
        int left_index = curnt * 2 + 1;
        int right_index = curnt * 2 + 2;
        int last_index = v.size()-1;

        if( left_index <= last_index && right_index <= last_index){
            //duitai ache
            if(v[left_index] <= v[right_index] && v[left_index] < v[curnt]){
                swap(v[left_index],v[curnt]);
                curnt = left_index;
            }
            else if (v[right_index] <= v[left_index] && v[right_index] < v[curnt])
            {
                swap(v[right_index],v[curnt]);
                curnt = right_index;
            }
            else{
                break;
            }
            
        }
        else if (left_index <= last_index)
        {
            //left side ache
            if(v[left_index] < v[curnt]){
                swap(v[left_index],v[curnt]);
                curnt = left_index;
            }
            else
            {
                break;
            }
            
        }
        else if (right_index <= last_index)
        {
            //right index ache
            if(v[right_index] < v[curnt]){
                swap(v[right_index],v[curnt]);
                curnt = right_index;

            }
            else{
                break;
            }
        }
        else
        {
            break;
        }
        
    }
    
}

void print_heap(vector<int> v){
    for(int val : v){
        cout<< val <<" ";
    }
}
int main(){
    int n;
    cin>> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        insert_heap(v,x);
    }
    print_heap(v);
    
    deleted_heap(v);
    cout<<endl;
    print_heap(v);
    deleted_heap(v);
    cout<<endl;
    print_heap(v);



    return 0;
}