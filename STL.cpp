#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>

using namespace std;

int main(){
    int basic[] ={13,412,6,23};

    //  ---------array-------------
    // array<int ,5> a={1,3,5,2,6};

    // int size = a.size();

    // for(int i = 0; i<size; i++){
    //     cout<<a[i]<< " " <<endl;
    // } 

    // cout<<"Element at index 2 is "<<a.at(2)<<endl;

    // cout<<"Empty or not "<<a.empty()<<endl;

    // cout<<"First Element "<<a.front()<<endl;

    // cout<<"Second Element "<<a.back()<<endl;


    //-----------vector-----------------
    // vector<int> v;
    // vector<int> v(5,1);
    // cout<<"size is "<<v.capacity()<<endl;

    // v.push_back(1);
    // cout<<"size is "<<v.capacity()<<endl;

    // v.push_back(2);
    // cout<<"size is "<<v.capacity()<<endl;


    // v.push_back(3);
    // cout<<"size is "<<v.capacity()<<endl;


    //-------deque----------
    // deque<int> d;

    // d.push_back(1);
    // d.push_front(3);

    // cout<<"size is "<<d.size()<<endl;
    // cout<<"front "<<d.front()<<endl;
    

    // // d.pop_back();
    // // cout<<"size is "<<d.size()<<endl;

    // cout<<"size is "<<d.size()<<endl;
    // d.erase(d.begin(),d.begin()+1);
    // cout<<"size is "<<d.size()<<endl;

    // for(int i :d){
    //     cout<<i<<endl;
    // }


    //-----------stack----------
    // stack <string> s;
    // s.push("love");
    // s.push("babbar");
    // s.push("channel");

    // cout<<"Top Element "<< s.top()<<endl;

    // s.pop();
    // cout<<"Top Element "<<s.top()<<endl;


    //----------queue-----------
    // max-heap
    // priority_queue <int> maxi;

    // //min-heap
    // priority_queue <int, vector<int> , greater<int>> mini;

    // maxi.push(2);
    // maxi.push(1);
    // // maxi.pop();
    // int n=maxi.size();
    // for(int i = 0; i<n; i++){
    //     cout<<maxi.top()<<endl;
    // }





    //--------------Set--------------
    // set<int> s;
    // s.insert(2);
    // s.insert(7);
    // s.insert(1);

    // for(auto i: s){
    //     cout<<i<<endl;
    // }


    //------------map---------------
    map<int, string> m;

    m[3]="lomdi";
    m[8]="babbar";
    m[1] = "kumar";

    m.insert({5,"modi"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding -3-> "<<m.count(-3)<<endl;  

    m.erase(3);
    cout<<"after erase"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }   
}