#include<iostream>
using namespace std;
int linearsearch(int array[], int n){
    for(int i=0; i<6; i++){
    if(n == array[i]){
       return i;
        break;
    } 
}
return -1;
}
void revarray(int arry[]){
    int start = 0, end = 4;
while(start < end){
    swap(arry[start], arry[end]);
    start++; end--;
}
}
int main(){
int arr[] = {0, 2, 4, 8, 6, 9};
cout << linearsearch(arr, 6) << endl;
// reverse an array
int arr1[] = {2, 8, 6, 4, 3};
revarray(arr1);
for(int i=0; i<5; i++){ 
cout << arr1[i] << " ";

}
cout << endl;


    return 0;
}