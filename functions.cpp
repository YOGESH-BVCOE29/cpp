#include<iostream>
using namespace std;


int sum(int a, int b) {
    int s = a + b;
    return s;}
// min of two number .
int mintwo(int a, int b) {
    if(a<b){ 
        return a;
    } else{
        return b;
    }
}
// calc sum of numbers from 1 to n  
void sumn(int n){
    int s =0;
    for(int i=0; i<=n; i++){
     s = s+i;

    } cout << s;
}
// calculating the n factorial 
int fact(int m){
    int f = 1;
    for(int i=1; i<=m; i++){
        f = f*i;
    } return f;
}

int main(){
  cout << sum(6, 3) << endl;
 cout << mintwo(5, 6) << endl; // argument are value passed to a functio
 sumn(5);
 cout << endl;
cout << fact(5) << endl;











    return 0;
}