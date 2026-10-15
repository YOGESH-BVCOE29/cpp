#include<iostream>
#include <vector>
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


    return 0;
}