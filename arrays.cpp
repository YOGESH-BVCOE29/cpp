#include<iostream>
using namespace std;

int main(){
int marks[] = {89, 90, 60, 30, 40};

cout << marks[1] << endl;
cout << marks[3] << endl;
// we can chage the value of an aaray 
marks[0] = 101;
cout << marks[0] << endl;
for(int i=0; i<5; i++){
    cout << marks[i] << endl;
}
return 0;
}