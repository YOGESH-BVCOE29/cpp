#include<iostream>
using namespace std;
int main(){
    // getting subarray 
 int arr[] = {2, 5, 6, 3, 1, 8};
 for(int st =0; st<6; st++){
    for(int end =st; end <6; end++){
        for(int i=st; i<=end; i++){
            cout << arr[i] ;
        } cout << " " ;
    } cout << endl;
 }





    return 0;
}
