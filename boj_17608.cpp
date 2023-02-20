#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int arr[100001];
    int n;
    int h = 0;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    } 
    for(int i = n-1; i >= 0; i--){
        if(h < arr[i]){
            cnt ++;
            h = arr[i];
        }
    }
    cout << cnt;
    return 0;
}