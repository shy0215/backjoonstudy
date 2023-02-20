#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    stack<int> stack;
    int n;
    int input[1000001];
    int output[1000001];
    cin >> n;
    for(int i = 0 ; i < n; i++) {
        cin >> input[i];
    }
    for(int i = n - 1; i >= 0; i--){
        while(!stack.empty() && stack.top() <= input[i]){
            stack.pop();
        }
        if(stack.empty()){
            output[i] = -1;
        }
        else {
            output[i] = stack.top();
        }
        stack.push(input[i]);
    }
    for(int i = 0; i < n; i++){
        cout << output[i] << ' ';
    }
    return 0;
}
