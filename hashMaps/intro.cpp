#include<iostream>
#include<map>
// #include<pair>
#include<unordered_map>
using namespace std;

int main()
{
     //crreation
    unordered_map<string, int> um;

    //insertion
    pair<string, int> p = make_pair("harsh", 3);
    um.insert(p);

    pair<string, int> pair2("maurya", 2);
    um.insert(pair2);
    
    um.insert(make_pair("harshu", 1));

    um["utkarsh"] = 4;


    //searching
    cout << um["harsh"] <<endl;
    cout<< um.at("maurya")<<endl;

    // cout<< um.at("euhfuewb")<<endl; // this is a value without key you will encounter this error
    //terminate called after throwing an instance of 'std::out_of_range'     what():  _Map_base::at 

    cout<< um["wehhbdyue"]<<endl; // o/p is 0
    // by above a entry is created for key 0 
    cout<< um.at("wehhbdyue")<<endl;

    //size
    cout<<um.size()<<endl;


    //to check presennce
    cout << um.count("harsh")<<endl;
    // return 1 if present 0 if not present

    //erase
    um.erase("harsh");
    cout<< um.size() <<endl;

    
    for(auto i: um){
        cout<< i.first <<" "<< i.second <<" ";

    } cout<<endl;


    //iterator
    unordered_map<string, int> :: iterator it = um.begin();

    while(it != um.end()){
        cout<< it->first <<" "<< it->second<<" "<<endl;
        it++;
    }

    return 0;
}