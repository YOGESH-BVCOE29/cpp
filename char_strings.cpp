#include <iostream>
#include <cstring> // for strlen if needed
#include<string>
using namespace std;

int main() {
    // CHARACTER ARRAYS 
    char str[] = "hello";
    cout << str << endl;

    // input in character arrays 
    char s[100];
    cout << "enter the string s: ";
    cin.getline(s, 100);
    cout << "output: " << s << endl;

    // CORRECTED: Getting all characters up to the null terminator
    cout << "Characters in s:" << endl;
    for(int i = 0; s[i] != '\0'; i++) {
        cout << s[i] << endl;
    }

    // how to find the length 
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    cout << "length of char string is: " << len << endl;
// strings 

string s1 = "apna college :";
cout << s1 << endl;
cout << s1.length() << endl;
string s2;
getline(cin, s2);
cout << "string s2 is :" << endl;
// loops on string 
for(int i=0; i< s1.length() ; i++){
    cout << s1[i] << endl;
}
// reverse a char array string without using reverse function 
int st = 0 , end =  s1.length() - 1;
while(st < end){
    swap(s1[st], s1[end]);
     st++, end--;

}
cout << s1 << endl;







    return 0;
}