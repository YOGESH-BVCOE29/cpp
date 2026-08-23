#include<iostream>
using namespace std;
int bintodecimal(int binnum){
    int ans =0, pow =1;
    while(binnum > 0){
        int rem = binnum % 10;
        ans += rem*pow;
        binnum /= 10;
        pow *= 2;
    } return ans;
}
int main(){
    // decimal to binary
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
   // binary to decimal 
cout << bintodecimal(101) << endl;



    return 0;
}