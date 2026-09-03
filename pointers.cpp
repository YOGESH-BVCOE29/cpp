#include<iostream>
using namespace std;
int main(){
int a = 10;
int *ptr = &a;
cout << ptr << endl;
cout << &a <<  endl;
int **ptr1 = &ptr;
cout << &ptr << endl;
cout << ptr1 << endl;
cout << *(&a) << endl; // 10
cout << *(ptr) << endl; // 10
int** b;
cout << b << endl; //  so it will gives a garbage value 
int **c = NULL;
cout << c << endl; // will give  0
 
    return 0;
}