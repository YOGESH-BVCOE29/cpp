#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int> &arr, int n, int m, int maxallowedpages){
int stu =1, pages = 0;
for(int i=0; i<n; i++){
    if(arr[i] > maxallowedpages){
        return false;
    }  if(pages +arr[i] <= maxallowedpages){
        pages += arr[i];
    } else{
        stu++;
        pages = arr[i];
    }
} return stu > m? false: true;

}
int allocatebooks(vector<int> &arr, int n, int m){
    if(m>n){
        return -1;
    }    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int s = 0,  e = sum;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isValid(arr, n, m, mid)) {
         ans = mid;
         e = mid-1;
        } else{
            s = mid+1;
    }
    } return ans;
}
int main(){

vector<int> arr = {2, 1, 3, 4};
int n=4, m=2;
cout << allocatebooks(arr, n, m) <<  endl;



    return 0;
}