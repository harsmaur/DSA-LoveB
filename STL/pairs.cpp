#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void Explainpair()
{

    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // nested pairs
    pair<int, pair<int, int>> p1 = {1, {2, 3}};

    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    // we can also declare array of pair
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << arr[0].first;
}



void ExplainVector()
{

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // same as push back but faster and efficient
    v.push_back(3);

    // vector of pair
    vector<pair<int, int>> vec;

    vec.push_back({1, 3});
    vec.emplace_back(4, 5);

    vector<int> v2(5, 100); //(size, initilializeValue)
    vector<int> v3(v2);     // copied v2 vector in v3]

    vector<int> v4(5); //(size)
    //
    cout<<v4.front()<<endl; //front elemnent
    cout<<v4.back()<<endl; //back element

    // iterating through the vector
    vector<int>::iterator it = v.begin();
    it++;
    cout << *it << " " << endl;

    vector<int>::iterator it2 = v.end();
    //     vector<int>::iterator it = v.rend();
    //     vector<int>::iterator it = v.rbegin();

    // accessing elements from the vctor
    cout << v[0] << " " << endl;
    cout << v.back() << " " << endl;

    // getting all the elements from the vector
    for (vector<int>::iterator it3 = v.begin(); it3 != v.end(); it3++)
    {
        cout << *it3 << endl;
    }

    // short way
    for (auto it4 = v.begin(); it4 != v.end(); it4++)
    {
        cout << *it4 << " " << endl;
    }

    // another way using for each loop
    for (auto it5 : v)
    {
        cout << it5 << " " << endl;
    }

    vector<int> vd;
    vd.push_back(1);
    vd.emplace_back(2);
    vd.push_back(3);
    vd.push_back(4);
    vd.push_back(5);
    // vd.pop_back();

    // Deleting the elements
    vd.erase(vd.begin(), vd.begin() + 2);

    cout << "Printing after deleting the elements" << endl;
    for (auto it5 : vd)
    {
        cout << it5 << " " << endl;
    }

    // Insert function

    vector<int> v6(2, 100);          //{100, 100}
    v6.insert(v6.begin(), 300);       //{300, 100, 100}
    v6.insert(v6.begin() + 1, 2, 10); //{300, 10, 10 , 100, 100}

    cout << "Printing after inserting the elements" << endl;
    for (auto it6 : v6)
    {
        cout << it6 << " " << endl;
    }


    //size
    cout<<v6.size()<<" "<<endl;
  
    //pops the last element
    v6.pop_back();  //{300, 10, 10, 100}

    //swap
    // v1.swap(v2);  //swaps v1 with v2

    //erases each elemet
    // v.clear()

    //check if empty
    cout<<v6.empty()<<" "<<endl;  // 0 false


}

void ExplainList(){ 
    //Similiar to vector with front operations
    //random acxcess not possible (ls.at(1)) this is not possible
    list<int> ls;
    ls.push_back(1);    // {1}
    ls.emplace_back(2); // {1,2}
    ls.push_front(5);   //{5, 1, 2}
    ls.emplace_front(6); //{6,5,1,2}

     //Rest operations are same as vector

}

void ExplainDeque(){

    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(5);
    dq.emplace_front(6);
    dq.pop_back();
    dq.pop_front();

    //similar to list operations
}


void ExplainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);

    cout<<st.top()<<" "
    <<endl;

//pop
    st.pop();

//top
    cout<<st.top()<<" "
    <<endl;

//size
    cout<<st.size()<<" "
    <<endl;

    cout<<st.empty()<<" "
    <<endl;

    //swap with another stack
    // st1.swap(st2);

}


void ExplainQueue(){
   
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6); //{1,2,3,4,5,6}

    q.back() +=7;  //6+7 = 13
    // for(auto it: q){
    //     cout<<it<<" "<<endl;
    // }

    cout<<q.front(); //1

cout<<endl;

    q.pop(); // {2,3,4,5,6}

    cout<<q.front(); //2 


}

void ExplainPQ(){
    //max Heap --> stores in non ascending order
 priority_queue<int> pq;
 pq.push(1);
 pq.push(6);
 pq.push(32);
 pq.push(0);
 //{32, 6, 1, 0}

 cout<<pq.top()<<endl;; //32

 pq.pop(); // 32 will be popped {6,1,0}

 //size swap empty fn same as others

cout<<"Min heap"<<endl;

 //Minimum Heap
 priority_queue<int, vector<int>, greater<int>> pqm;
 pqm.push(1);
 pqm.push(6);
 pqm.push(32);
 pqm.push(0);
 //{0, 1, 6, 32}

 cout<<pqm.top(); //0

 pqm.pop(); //{1,6,32}

}

void ExplainSET(){
    //stores unique and sorted manner
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(4);
    st.insert(5); //{ 1,2,3,4,5}

    // we can use the fucntionality of insert in vector but that will only increae the efficiency

    //begin(), end(), rbegin(), rend(), size() empty()
    // are same 

    auto it = st.find(3); //returns it which points to 3

    auto ite = st.find(6); 

    int cnt = st.count(3); //std::count() returns the number of occurrences of an element in a given range. 
    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2);  //{1, 4, 5, 6};



}

void ExplainMultiSET(){
    //everything is same as set but not unique
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);


    ms.erase(1); // all 1s are erased
    int cnt = ms.count(1);


    //erases only a single 1
    ms.erase(ms.find(1));


    }

void ExplainUnorderedSET(){
    //everthing is same as set but not sorted  except the
}

void ExplainMap(){

    map<int, int> mpp; //{key, value}

    map<int, pair<int, int>> mpp2; //{1key , 2values}

    map<pair<int, int>, int> mpp3; //{2keys, 1value}

    mpp[1] = 2;        //{1, 2}
    mpp.emplace(3, 1); //{3,1}
    mpp.insert({4,8});
    mpp3[{2,4}] = 10;
    
    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1]<<endl;
    cout<<mpp[2]<<endl;  //if not found o/ps 0

    auto it = mpp.find(3);
    
}


bool comp(pair<int, int> p1, pair<int, int> p2){

    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    //they are same (second)
    if(p1.first > p2.first) return true;
    return false;

}

void ExtraExplain(){

    //Algorithms 


    //sort
    // sort(a, a+n); //[first, last)

    //sorting a vector
    vector<int> v = {19, 4,24, 14,6,28};
    sort(v.begin(), v.end());

    for(auto it : v){
        cout<<it<<" "<<endl;
    }
cout<<endl;
    //sorting an array
    int a[5] = {8,2,2,782,13};
    int n = sizeof(a)/sizeof(int);
    sort(a, a+n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" "<<endl;
    }

cout<<endl;
    //Sorting in descending order
    sort(v.begin(), v.end(), greater<int>());


    for(auto it : v){
        cout<<it<<" "<<endl;
    }

cout<<endl;

    //Sorting in a fashion i want to sort

    pair<int, int> p[] = {{1,2}, {2,1}, {4, 1}};
    //sort it according to second element
    // if the element is same, then sort
    //it according to the first element but in descending

    int n1 = sizeof(p)/sizeof(p[0]);

    sort(p, p+n1, comp);
    // {4,1}, {2, 1}, {1,2}

    
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout<<cnt<<endl;


    //get all permuatations of string s
    string s ="123";
    do{
        cout<<s<< " "<<endl;
    }while(next_permutation(s.begin(), s.end()));

//Binary Search algo stl

    vector<int> love;
    love.push_back(1);
    love.push_back(2);
    love.push_back(3);
    love.push_back(4);
   
   cout<<binary_search(love.begin(), love.end(), 5);

 //reverse string
   string abcd = "abcd";
   reverse(abcd.begin(), abcd.end());
   cout<<abcd<<endl;

//  rotate
   rotate(love.begin(),love.begin()+1, love.end());


}

int main()
{
    // Explainpair();
    // ExplainVector();
    // ExplainStack();
    // ExplainQueue();
    // ExplainPQ();
    // ExplainMap();
       ExtraExplain();

    return 0;
}