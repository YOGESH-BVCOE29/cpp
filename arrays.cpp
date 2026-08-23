#include<iostream>
using namespace std;

int main(){
int marks[] = {89, 90, 60, 30, 40};

cout << marks[1] << endl;
cout << marks[3] << endl;
// we can chage the value of an aaray 
marks[0] = 101;
cout << marks[0] << endl;
for(int i=0; i<5; i++){
    cout << marks[i] << endl;
}
// inputting an array
int price[5];
for(int i=0; i<5; i++){
    cin >> price[i];
}
for(int i=0; i<5; i++){
    cout << price[i] << endl;
}
// finding smallest and largest no of an array
int arr[] = {5, 12, 22, 1, 15, 24};
int smallest = INT8_MAX;
for(int i=0; i<5; i++){
    if(arr[i] < smallest){
        smallest = arr[i];
    } 
}cout << smallest << endl;



return 0;
}