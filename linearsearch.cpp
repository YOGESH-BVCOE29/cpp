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
int main(){
int arr[] = {0, 2, 4, 8, 6, 9};
cout << linearsearch(arr, 6) << endl;





    return 0;
}