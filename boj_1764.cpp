#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
     vector<string> v, output;
    int n; //듣도 못한 사람의 수
    int m; //보도 못한 사람의 수 
    int cnt = 0 ;
    cin >> n >> m;
    string input;
    for(int i = 0; i < n+m; i++){
        cin >> input; 
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n + m; i++){
        if(v[i]==v[i+1]){
            output.push_back(v[i]);
            cnt++;
        }
    }
    cout << cnt << '\n';
    for(int i = 0; i < n; i++){
        cout << output[i] << '\n';
    }
    return 0;
}