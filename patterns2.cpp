#include<iostream>
using namespace std;
int main(){
 // (7) new pattern problem
//  inverted triangle problem
//  1 1 1 1
//    2 2 2
//      3 3
//        4
int n;
cout << "enter the number:";
cin >> n;
for(int i=0; i<n; i++){
    for(int j=0; j<i; j++){
        cout << " "; }
        for(int j=0; j<n-i; j++){
            cout << (i+1);
        } 
 cout << endl;
    } 
    int a; 
    cout << "print the number ";
    cin >> a;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        } 
    for(int j=1; j<=i+1; j++){
        cout << j;
    } for(int j=i; j>0; j--){
        cout << j;
    } cout << endl;
    }











    return 0;
}