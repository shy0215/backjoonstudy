#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string input;
	while (true){
		getline(cin, input); 
		stack<char> a;
		if (input[0] == '.'){
            break;
        } 
		for (int i = 0; i < input.length() - 1; i++){
			if (input[i] == '(') a.push('(');
			if (input[i] == '[') a.push('[');
			if (input[i] == ']'){
				if (!a.empty() && a.top() == '['){
                    a.pop(); 
                } 
				else { 
                cout << "no" << "\n";
                break; 
                }
            }
			if (input[i] == ')'){
				if (!a.empty() && a.top() == '(') {
                    a.pop();
                }
				else { 
                    cout << "no" << "\n";
                    break; 
                    } 
			    }
			if (a.empty() && i == input.length() - 2){
                cout << "yes" <<'\n';
            }
			else if (!a.empty() && i == input.length() - 2) {
                cout << "no" << '\n';
            }
	    }
    }
}