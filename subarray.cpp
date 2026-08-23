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

int a[] = {3, -4, 5, 4, -1, 7, -8};
int maxsum = INT8_MIN;
 for(int st =0; st<7; st++){
    int currsum = 0;
    for(int end =st; end <7; end++){
        currsum += a[end];

        maxsum = max(maxsum, currsum);}}
        cout << maxsum;
    
cout << endl;
int b[] = {3, -4, 5, 4, -1, 7, -8};
int cs = 0; // current sum
int ms = INT8_MIN; // max sum 
for(int i=0; i<7; i++){
    cs += b[i];
    ms = max(ms, cs);
    if(cs < 0){
        cs = 0;
    }
} cout << ms;



    return 0;
}
