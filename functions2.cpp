// function in memory
#include<iostream>
using namespace std;
void fun(){
int x = 25;
cout << "x=" << x << endl;
 
}
// calc the sum of digits of a number 
int sum(int n){
   int digsum =0;
   while(n > 0){
    int lastdigit = n%10;
    n = n/10;
    digsum += lastdigit;
   }
  return digsum;
}




int main(){

fun();
cout << endl;

cout << sum(143)<< endl;


    return 0;
}
