#include<iostream>
using namespace std;
int main(){

 int a = 4, b=8;
cout << (a&b) << endl; // bitwise and  = dono condition true honi chiaye 
cout << (a | b) << endl; // bitwise or = koi bhi ek condition true honiu chaiye
cout << (a^b) << endl; // bitwise XOR = dono ulte ho tabhi true answer ayega 
cout << (10 << 2) <<endl; // bitwise left shift = isme jo 10 ke binary digits wo do digits age shift ho jayegi aur naya number bana lengi 
cout << (10 >> 1) << endl; // bitwise right shift


    return 0;
}