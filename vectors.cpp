#include<iostream>
#include<vector>
using namespace std;
int main(){
// vectors syntax 
vector<int> vec = {1, 2, 3}; // vector syntax
cout << vec[0] << endl;
vector<int> vec1(3, 0);
for(int i=0; i<3; i++){
    cout << vec1[i] << " ";
}
// for each loop 
cout << endl;
for(int i: vec){
    cout << i << " ";
}
cout << endl;
// size function
cout << vec.size() << endl;

// push back function
vec1.push_back(25);
cout << vec1.size() << endl;
for(int i=0; i<4; i++){
    cout << vec1[i] << " ";
}
cout << endl;
// pop back function
vec1.pop_back();
for(int i=0; i<3; i++){
    cout << vec1[i] << " ";
}
cout << endl;
// front 
cout << vec.front() << endl;
cout << vec.back() << endl;
cout << vec.at(2) << endl;
    return 0;
}