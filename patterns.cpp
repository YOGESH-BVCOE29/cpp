#include<iostream>
using namespace std;
int main(){
   // (1)  square pattern ; easy with numbers n=4
   int n;
   cout << "enter the number :";
   cin >> n;
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout << j ;
    } cout << endl;
   } 
   // (2)   pattern problem 2 
    // 1 2 3
    // 4 5 6
    // 7 8 9
     int m;
     cout << "enter the number :";
     cin >> m;
     int num =1;
     for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << num;
            num++;
        } cout << endl;
     }
// (3) pattern problem 3
//  triangle pattern n=4
// *
// **
// ***
// ****
    int a; 
    cout << "enter the number:";
    cin >> a;
    for(int i=0; i<a; i++){
        for(int j=0; j<i+1; j++){
         cout << "*";
        }   
    cout << endl;
    }




    return 0;
} 
