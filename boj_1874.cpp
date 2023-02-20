#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int input;
    int end = 0;
    stack<int> stack;
    string output;
    cin >> n;

    while(n--){
        cin >> input;
        if( input > end){
            for(int i = end +1; i <= input; i++){
                stack.push(i);
                output += "+";
            }
        }
        else
            if(stack.top() != input){
                cout << "NO";
                return 0;
            }
        stack.pop();
        output += "-";
        if( end < input){
            end = input;
        }
    }
    for(int i = 0; i < output.size(); i++){
        cout << output[i] << "\n";
    }
    return 0;
}