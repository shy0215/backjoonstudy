#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    stack<char> a;
    string input;
    int output =0;
    cin >> input;
    for(int i = 0; i < input.size(); i++){
        if(input[i] == '('){
            a.push(input[i]);
        }
        else if(input[i] == ')' && input[i-1]=='('){
            a.pop();
            output += a.size();
        }
        else{
            output++;
            a.pop();
        }
    }
    cout << output << '\n';
}