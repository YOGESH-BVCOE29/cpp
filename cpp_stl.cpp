#include<iostream>
#include <vector>
#include<list>
#include<deque>
using namespace std;
int main(){
// VECTORS
cout << "hello" << endl;
 vector<int> vec = {1, 2, 3, 4, 5}; 
 cout << vec.size() << endl;
vec.erase(vec.begin()+2);
vec.insert(vec.begin()+2, 200);
// for(int val: vec){
//     cout << val << " ";
// }
vector <int> :: iterator it;
for(it=vec.begin(); it!=vec.end(); it++){
    cout<< *(it)<< endl;
}
// LISTS
list<int> l;
l.emplace_back(1);
l.push_back(2);
l.push_front(3);
l.push_front(5);
l.pop_back();
l.pop_front();
for(int val:l){
    cout << val << " ";
} cout << endl;
// deque = doubly ended queue 
deque<int> d;
d.emplace_back(1);
d.push_back(2);
d.push_front(3);
d.push_front(5);
d.pop_back();
d.pop_front();
for(int val:d){
    cout << val << " ";
} cout << endl;



    return 0;
}