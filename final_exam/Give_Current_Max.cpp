#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;

    }
};
class cmp{
    public:
        bool operator()(Student a, Student b){
            if(a.marks == b.marks){
                return a.roll > b.roll;
            }
            else{
                return a.marks < b.marks;
            }
        }
};
int main(){
    int q,t;
    cin >> q;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < q; i++)
    {
        string name;
        int roll;
        int marks;
        cin>>name>>roll>>marks;
        pq.push(Student(name, roll, marks));

    }
    
    cin>> t;
    while (t--)
    {
        int a;
        cin>> a;
        if(a == 0){
            string name;
            int roll;
            int marks;
            cin>>name>>roll>>marks;
            pq.push(Student(name,roll,marks));
           
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            
           
        }
        else if(a == 1){
            if(!pq.empty()){
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
        else if(a == 2){
                if(!pq.empty()){
                    pq.pop();
                }
                if(!pq.empty()){
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                }
                else{
                cout<<"Empty"<<endl;
                }
        }
        else{
            cout<<"Empty"<<endl;
        }
    }

    
    return 0;
}