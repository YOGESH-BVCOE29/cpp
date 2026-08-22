// function in memory
#include<iostream>
using namespace std;
void fun(){
int x = 25;
cout << "x=" << x << endl;
 
}
// calc the sum of digits of a number 
int sum(int m){
   int digsum =0;
   while(m > 0){
    int lastdigit = m%10;
    m = m/10;
    digsum += lastdigit;
   }
  return digsum;
}
// calculate ncr binomial coefficient of n and r value 
int fact(int n){
    int f = 1;
    for(int i=1; i<=n; i++){
        f = f*i;
    } 
    return f;
}
int nCr(int n, int r){
    int fn = fact(n);
    int fr = fact(r);
    int fnr = fact(n-r);
    return fn / (fr * fnr);
}


int main(){
fun();
cout << endl;
cout << sum(143)<< endl;
int n=8, r=2;
cout << nCr(n, r) << endl;


    return 0;
}
