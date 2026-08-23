#include<iostream>
using namespace std;
int main(){
   int n;
   cout << "enter the number:";
   cin >> n;
   int bn = 0;
   int pow = 1;
   while (n>0)
   {
    int rem = n%2;
    n = n/2;
    bn = bn + (rem*pow);
    pow = pow*10;

   } cout << bn << endl;
   





    return 0;
}