#include<iostream>
using namespace std;
void changeA(int *ptr){
    *ptr = 20;
}
int main(){
 int a = 10;
 changeA(&a);
 cout << a << endl;
int arr[] = {1, 2, 3, 4, 5};
cout << arr << endl;
cout << *arr << endl;
cout << *(arr+1) << endl;


    return 0;
}